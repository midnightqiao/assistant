#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QFile>
#include <QByteArray>
#include <QMovie>
#include <QFileDialog>
#include <QMessageBox>
#include <QPixmap>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlTableModel>
#include <QSqlRecord>
#include <QCamera>
#include <QCameraImageCapture>
#include <QImageEncoderSettings>
#include <QCameraInfo>
#include <QCameraViewfinder> //显示图像的部件
#include <QList>
#include <QMediaRecorder>
#include <QUrl>
#include <opencv2/opencv.hpp>
#include <thread_videocapture.h>


extern QSqlDatabase db;

using namespace cv;




Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //读取样式文件，设置样式表
    QFile styleFile(":/qss/style.qss");
    if(!styleFile.open(QIODevice::ReadOnly))
    {
        qDebug()<<"read error";
    }
    QByteArray array =styleFile.readAll();
    styleFile.close();
    qApp->setStyleSheet(array);

    //初始化选中界面
    ui->btn_login->setChecked(true);
    ui->stackedWidget->setCurrentIndex(1);
    ui->tabWidget->setCurrentIndex(2);

    //其他页面按钮失能
//    ui->btn_injection->setEnabled(false);
//    ui->btn_message->setEnabled(false);
//    ui->btn_setting->setEnabled(false);

    //lbl_show显示动图
    QMovie* movie = new QMovie(":/img/img/icon_show.gif");
    ui->lbl_show->setMovie(movie);
    ui->lbl_show->setScaledContents(true);
    if(movie)
        movie->start();
    else
        qDebug()<<"movie null";

    //lbl_show和按钮btn设置buddy
    ui->lbl_show->setBuddy(ui->btn_choose);

    //lbl_image设置可变大小
    ui->lbl_image->setScaledContents(true);

    //只有管理员身份能修改护士信息
//    ui->tabWidget->setTabEnabled(2,false);

    //dE_deadline获取当前日期
    ui->dE_deadline->setDate(QDate::currentDate());

    //de_select_deadline获取当前日期
    ui->dE_select_deadline->setDate((QDate::currentDate()));

    //给tV_modify设置数据源,model初始化
    model = new QSqlTableModel();
    model->setTable("nurse");
    model->select();
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->setHeaderData(0,Qt::Horizontal,QString::fromLocal8Bit("工号"));
    model->setHeaderData(1,Qt::Horizontal,QString::fromLocal8Bit("姓名"));
    model->setHeaderData(2,Qt::Horizontal,QString::fromLocal8Bit("资质文件路径"));
    model->setHeaderData(3,Qt::Horizontal,QString::fromLocal8Bit("资质到期日期"));

    ui->tV_modify->setModel(model);


    //给tV_select设置数据源
    ui->tV_select->setModel(model);

    //账号、密码输入框 设置输入提醒
    ui->lE_login_id->setPlaceholderText(QString::fromLocal8Bit("输入用户id"));
    ui->lE_login_pwd->setPlaceholderText(QString::fromLocal8Bit("输入用户密码"));

    //图像显示部件的初始化
    viewfinder = new QCameraViewfinder(ui->stackedWidget->widget(2));
    viewfinder->move(ui->lbl_video_show->pos());
    viewfinder->resize(ui->lbl_video_show->size());
    ui->lbl_video_show->hide();


//    更新ui->cB_camera数据项
    ui->cB_camera->clear();
    QList<QCameraInfo> cameras = QCameraInfo::availableCameras();
    foreach(QCameraInfo camera ,cameras)
    {
        ui->cB_camera->addItem(camera.description());
    }
//    //初始化camera对象
    cameraChanged();

    //需要用到多线程读取摄像头的每一帧
    connect(ui->pushButton,&QPushButton::clicked,this,[=](){
        if(camera->state()==QCamera::ActiveState)
        {
            camera->stop();
        }

        Mythread.start();
    });

    //退出线程，关闭摄像头
    connect(ui->pushButton_2,&QPushButton::clicked,this,[=](){
        if(Mythread.isRunning())
            Mythread.stop();
    });


    //初始化录像保存按钮
    connect(ui->btn_setSavedPath, &QPushButton::clicked, this, [=]() {
        QString savedPath = QFileDialog::getSaveFileName(this,QString::fromLocal8Bit( "设置录像保存路径"));
        if (!savedPath.isEmpty())
        {
            Mythread.setSavedPath(savedPath);
            ui->lbl_savedPath->setText(Mythread.getSavedPath());
        }
        
        });
    

}

Widget::~Widget()
{
    while (Mythread.isRunning())
    {
        Mythread.stop();
    }
    Mythread.deleteLater();
    
    delete ui;
}


void Widget::on_btn_message_clicked()
{

    ui->stackedWidget->setCurrentIndex(0);
}



void Widget::on_btn_injection_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);

    //更新ui->cB_camera数据项
    ui->cB_camera->clear();
    QList<QCameraInfo> cameras = QCameraInfo::availableCameras();
    foreach(QCameraInfo camera ,cameras)
    {
        ui->cB_camera->addItem(camera.description());
    }

    //更新录像保存标签
    ui->lbl_savedPath->setText(Mythread.getSavedPath());
}

void Widget::on_btn_choose_triggered(QAction *arg1)
{
    //选择资质文件
//    QString filename = QFileDialog::getOpenFileName(this,"open file");
//    qDebug()<<filename;
}

void Widget::on_btn_choose_clicked()
{
    //选择资质文件
    QString filename = QFileDialog::getOpenFileName(this,"open file");
    if(filename.isEmpty())
    {
        return;
    }
    qDebug()<<filename;
    QPixmap pix;
    pix.load(filename);
    ui->lbl_image->setPixmap(pix);
    //设置资质文件
    qualificationFile = filename;
    //标签显示文件名
    ui->lbl_filename->setText(qualificationFile);
    ui->lbl_filename->setToolTip(qualificationFile);
    //护士录入信息
    input_msg.setFilename(filename);
}

void Widget::on_btn_input_clicked()
{
    QString error = input();
    if(error.isNull())
        QMessageBox::information(this,QString::fromLocal8Bit("录入成功"),QString::fromLocal8Bit("录入成功"));
    else
    {
        QMessageBox::critical(this,QString::fromLocal8Bit("录入错误"),error);
    }
}

//检查录入信息的完整以及提交到数据库
QString Widget::input()
{
    input_msg.setDeadline(ui->dE_deadline->date());
    if(input_msg.isMissing())
        return QString(QString::fromLocal8Bit("录入信息不完整"));
    QSqlQuery query;
    query.prepare("insert into nurse(NurseID,NurseName,NurseQualificationFile,QualificationExpiryDate) values(:id,:name,:filename,:deadline);");
    query.bindValue(":id",input_msg.id());
    query.bindValue(":name",input_msg.name());
    query.bindValue(":filename",input_msg.filename());
    query.bindValue(":deadline",input_msg.deadline());
    if(!query.exec())
    {
        qDebug()<<db.lastError();
        return QString(QString::fromLocal8Bit("提交数据库出错"));
    }

    return QString();
}

void Widget::on_lE_id_editingFinished()
{
    input_msg.setId(ui->lE_id->text());
}

void Widget::on_lE_name_editingFinished()
{
    input_msg.setName(ui->lE_name->text());
}

void Widget::on_dE_deadline_dateChanged(const QDate &date)
{
    input_msg.setDeadline(ui->dE_deadline->date());
}


//提交修改按钮
void Widget::on_btn_submit_clicked()
{
    model->database().transaction();
    if(model->submitAll())
    {
        if(model->database().commit())
            QMessageBox::information(ui->tV_modify,QString::fromLocal8Bit("提交成功"),QString::fromLocal8Bit("数据修改成功"));
    }
    else
    {
        model->database().rollback();
        QMessageBox::warning(ui->tV_modify,QString::fromLocal8Bit("提交失败"),QString("数据修改失败:%1").arg(db.lastError().text()));
    }
}


void Widget::on_btn_revert_clicked()
{
    model->revertAll();
}

void Widget::on_btn_delete_clicked()
{
    int row =ui->tV_modify->currentIndex().row();
    model->removeRow(row);
    int ok = QMessageBox::warning(ui->tV_modify,QString::fromLocal8Bit("删除当前行"),QString::fromLocal8Bit("你确定删除当前行的数据吗？"),QMessageBox::Yes,QMessageBox::No);
    if(ok == QMessageBox::Yes)
    {
        model->submitAll();
    }
    else
        model->revertAll();
}

void Widget::on_btn_ascend_clicked()
{
    model->setSort(0,Qt::AscendingOrder);
    model->select();
}

void Widget::on_btn_descend_clicked()
{
    model->setSort(0,Qt::DescendingOrder);
    model->select();
}

void Widget::on_btn_select_clicked()
{
    QString name = ui->lE_modify_name->text();
    if(name.isEmpty())
    {
        model->setTable("nurse");
        model->setHeaderData(0,Qt::Horizontal,QString::fromLocal8Bit("工号"));
        model->setHeaderData(1,Qt::Horizontal,QString::fromLocal8Bit("姓名"));
        model->setHeaderData(2,Qt::Horizontal,QString::fromLocal8Bit("资质文件路径"));
        model->setHeaderData(3,Qt::Horizontal,QString::fromLocal8Bit("资质到期日期"));
        model->select();
    }
    else
    {
        model->setFilter(QString("NurseName like '%1%' ").arg(name));
        model->select();
    }

}

void Widget::on_btn_showAll_clicked()
{
    model->setTable("nurse");
    model->setHeaderData(0,Qt::Horizontal,QString::fromLocal8Bit("工号"));
    model->setHeaderData(1,Qt::Horizontal,QString::fromLocal8Bit("姓名"));
    model->setHeaderData(2,Qt::Horizontal,QString::fromLocal8Bit("资质文件路径"));
    model->setHeaderData(3,Qt::Horizontal,QString::fromLocal8Bit("资质到期日期"));
    model->select();
}

void Widget::on_btn_select1_clicked()
{
    QString id = ui->lE_select_id->text();
    QString name = ui->lE_select_name->text();
    QString status = ui->cB_select_status->currentText();

    QString filter;
    if(!id.isEmpty())
    {
            filter = QString("NurseID = '%1'").arg(id);
    }
    if(!name.isEmpty())
    {
        if(!filter.isEmpty())
        {
            filter.append(QString("and NurseName like '%1%' ").arg(name));
        }
        else
            filter =  QString("NurseName like '%1%' ").arg(name);
    }
    if(status == QString::fromLocal8Bit("任意"))
    {
        qDebug()<<"renyi";
    }
    else if(status == QString::fromLocal8Bit("有效期内"))
    {
        qDebug()<<"youxiaoqinei";
        if(!filter.isEmpty())
        {
            filter.append(QString("and QualificationExpiryDate > '%1'").arg(QDate::currentDate().toString("yyyy-MM-dd")));
        }
        else
            filter =  QString("QualificationExpiryDate > '%1'").arg(QDate::currentDate().toString("yyyy-MM-dd"));

    }
    else if(status == QString::fromLocal8Bit("已失效"))
    {
        qDebug()<<"yishixiao";
        if(!filter.isEmpty())
        {
            filter.append(QString("and QualificationExpiryDate <= '%1'").arg(QDate::currentDate().toString("yyyy-MM-dd")));
        }
        else
            filter =  QString("QualificationExpiryDate <= '%1'").arg(QDate::currentDate().toString("yyyy-MM-dd"));
    }
    model->setFilter(filter);
    model->select();

}

//查询指定日期前的护士信息，并根据截止时间降序排序
void Widget::on_btn_select2_clicked()
{
    QDate date = ui->dE_select_deadline->date();
    QString filter = QString(" QualificationExpiryDate <= '%1'").arg(date.toString("yyyy-MM-dd"));
    model->setFilter(filter);
    model->setSort(3,Qt::DescendingOrder);
    model->select();
}

void Widget::on_btn_login_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void Widget::on_btn_setting_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}



void Widget::on_btn_login_register_clicked()
{
    if(ui->lE_login_id->text().isEmpty()||ui->lE_login_pwd->text().isEmpty())
    {
        QMessageBox::information(this,QString::fromLocal8Bit("注册失败"),QString::fromLocal8Bit("工号和密码不能为空"));
        return;
    }
    QSqlQuery query;
    if(query.exec(QString("insert into nurselogin values('%1','%2')").arg(ui->lE_login_id->text()).arg(ui->lE_login_pwd->text())))
    {
        query.exec(QString("select NurseName from nurse where NurseID='%1'").arg(ui->lE_login_id->text()));
        if(query.next())
        {
            QString NurseName = query.record().value(0).toString();
            QString msg = NurseName.append(QString::fromLocal8Bit(" 用户注册成功"));
            QMessageBox::information(this,QString::fromLocal8Bit("注册成功"),msg);
        }
        else
            QMessageBox::information(this,QString::fromLocal8Bit("注册成功"),QString::fromLocal8Bit("注册成功"));
        qDebug()<<"注册成功";
    }
    else
    {
        qDebug()<<"注册失败";
        //护工信息是否已经注册
        query.exec(QString("select * from nurselogin where NurseID = '%1'").arg(ui->lE_login_id->text()));
        if(query.next())
        {
            QMessageBox::information(this,QString::fromLocal8Bit("注册失败"),QString::fromLocal8Bit("该工号已经注册"));
            return;
        }

        //护工信息是否录入
        query.exec(QString("select * from nurse where NurseID = '%1'").arg(ui->lE_login_id->text()));
        if(!query.next())
        {
            QMessageBox::information(this,QString::fromLocal8Bit("注册失败"),QString::fromLocal8Bit("该工号未录入疫苗助手系统"));
            return;
        }

        QMessageBox::information(this,QString::fromLocal8Bit("注册失败"),QString("注册失败:%1").arg(db.lastError().text()));


    }
}

void Widget::on_btn_login_login_clicked()
{
    if(ui->lE_login_id->text().isEmpty()||ui->lE_login_pwd->text().isEmpty())
    {
        QMessageBox::information(this,QString::fromLocal8Bit("登录失败"),QString::fromLocal8Bit("工号和密码不能为空"));
        return;
    }
    QSqlQuery query;
    query.exec(QString("select * from nurselogin where NurseID = '%1' and Password = '%2'").arg(ui->lE_login_id->text()).arg(ui->lE_login_pwd->text()));

    if(query.next())
    {
        qDebug()<<"登录成功";
        qDebug()<<query.record().value(0).toString()<<query.record().value(1).toString();

        QString id = query.record().value(0).toString();
//        QMessageBox::information()

        query.exec(QString("select NurseName from nurse where NurseID='%1'").arg(id));
        if(query.next())
        {
            QString NurseName = query.record().value(0).toString();
            qDebug()<<"NurseName"<<NurseName.toLocal8Bit();
            QString msg = QString::fromLocal8Bit("%1 用户成功登录系统").arg(NurseName);
            QMessageBox::information(this,QString::fromLocal8Bit("登陆成功"),msg);
        }


        //解开权限
        ui->btn_injection->setEnabled(true);
        ui->btn_setting->setEnabled(true);
        ui->btn_message->setEnabled(true);
    }
    else
    {
        qDebug()<<"登录失败";
        //护工信息是否已经注册
        query.exec(QString("select * from nurselogin where NurseID = '%1'").arg(ui->lE_login_id->text()));
        if(!query.next())
        {
            QMessageBox::information(this,QString::fromLocal8Bit("登录失败"),QString::fromLocal8Bit("该工号未注册，请先注册"));
            return;
        }
        //密码错误
        QMessageBox::information(this,QString::fromLocal8Bit("登录失败"),QString::fromLocal8Bit("密码错误"));
    }
}

void Widget::cameraChanged()
{
    QList<QCameraInfo> cameras = QCameraInfo::availableCameras();
    foreach(QCameraInfo c,cameras)
    {
        if(ui->cB_camera->currentText()==c.description())
        {
            camera = new QCamera(c);
            camera->setViewfinder(viewfinder);
            break;
        }
    }
    //图像捕获
    imageCapture = new QCameraImageCapture(camera);
    //录像
    mediaRecorder = new QMediaRecorder(camera);
    camera->start();

    //录像时间更新的槽函数(弃用qt,改用opencv)
    //connect(mediaRecorder,&QMediaRecorder::durationChanged,this,&Widget::updateProgress);
}

void Widget::on_btn_capture_clicked()
{
    camera->setCaptureMode(QCamera::CaptureStillImage);
    QString filename = QFileDialog::getSaveFileName();
    camera->searchAndLock();
    imageCapture->capture(filename);
    camera->unlock();
}





void Widget::on_btn_close_camera_clicked()
{
    camera->stop();
}

void Widget::on_btn_open_camera_clicked()
{
    if(Mythread.isRunning())
    {
        Mythread.stop();
    }
    camera->start();
}

void Widget::updateProgress()
{
    ui->lbl_display->setText(QString("已录制 %1 秒").arg(mediaRecorder->duration()%1000));
}

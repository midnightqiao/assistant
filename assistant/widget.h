#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "inputmessage.h"
#include <QSqlTableModel>
#include <QCameraViewfinder> //显示图像的部件
#include <thread_videocapture.h>
class QCamera;
class QString;
class QCameraImageCapture;
class QMediaRecorder;
class Thread_VideoCapture;

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:

    void on_btn_message_clicked();

    void on_btn_injection_clicked();

    void on_btn_choose_triggered(QAction *arg1);

    void on_btn_choose_clicked();

    void on_btn_input_clicked();

    void on_lE_id_editingFinished();

    void on_lE_name_editingFinished();

    void on_dE_deadline_dateChanged(const QDate &date);

    void on_btn_submit_clicked();

    void on_btn_revert_clicked();

    void on_btn_delete_clicked();

    void on_btn_ascend_clicked();

    void on_btn_descend_clicked();

    void on_btn_select_clicked();

    void on_btn_showAll_clicked();

    void on_btn_select1_clicked();

    void on_btn_select2_clicked();

    void on_btn_login_clicked();

    void on_btn_setting_clicked();

    void on_btn_login_register_clicked();

    void on_btn_login_login_clicked();

    void cameraChanged();

    void on_btn_capture_clicked();

    void on_btn_close_camera_clicked();

    void on_btn_open_camera_clicked();

    void updateProgress();//更新显示视频录制的时间

private:
    Ui::Widget *ui;

    QString qualificationFile;

    QSqlTableModel* model;//model以nurse表为数据
    //要录入的护士信息
    inputMessage input_msg;

    QCameraViewfinder *viewfinder;//图像显示窗口

    QCamera* camera;
    QCameraImageCapture* imageCapture;

    QMediaRecorder* mediaRecorder;

    //录入护士信息,返回报错信息，若无错误，返回空字符串
    QString input();

    Thread_VideoCapture Mythread;
};
#endif // WIDGET_H

#include "widget.h"

#include <QApplication>
#include <QFile>
#include <QByteArray>
#include <QDebug>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQuery>

bool createConnection();//连接数据库
QSqlDatabase db; //使用的数据库

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    qDebug()<<QSqlDatabase::drivers();

    if(!createConnection())
    {
        return 1;
    }
    QStringList tables = db.tables();
    foreach(QString table, tables)
           qDebug()<<table;
    QSqlQuery query;
//    if(query.exec("insert into nurse values('%1','%2','%3','20210101');"))
//    {
//        qDebug()<<"查找成功";
//    }
//    else
//        qDebug()<<"error "<<db.lastError();
    Widget w;
    w.show();
    return a.exec();
}

//连接数据库
bool createConnection()
{
    db = QSqlDatabase::addDatabase("QODBC3");
    db.setHostName("https://jaguar-unified-vertically.ngrok-free.app");
    db.setUserName("root");
    db.setPassword("123456");
    db.setPort(3306);
    db.setDatabaseName("assistant");
    if(!db.open())
    {
        QMessageBox::warning(nullptr,QString::fromLocal8Bit("数据库连接失败"),db.lastError().text());
        return false;
    }
    qDebug()<<"数据库连接成功";

    qDebug()<<"mysql--------";
    return true;

    qDebug()<<"sqlite--------";
    QSqlQuery query;
    bool ok = query.exec("CREATE TABLE `administrator`  ( `AdministratorID` varchar(10) NOT NULL, `AdministratorName` varchar(100)  NOT NULL,`AdministratorPassword` varchar(100)  NOT NULL,PRIMARY KEY (`AdministratorID`)) ;");
    if (ok)
    {
        qDebug() << QString::fromLocal8Bit("创建成功");
    }
    else
        qDebug() << "create error";


    ok = query.exec("CREATE TABLE `injectionrecord`  (`RecordID` int NOT NULL,`NurseID` varchar(10)  NOT NULL,`VaccineID` int NOT NULL,`InfantID` int NOT NULL,`InjectionDateTime` datetime NOT NULL,  `InjectionVideoFile` varchar(255)  NOT NULL,PRIMARY KEY (`RecordID`) ) ;");
    if (ok)
    {
        qDebug() << QString::fromLocal8Bit("创建成功");
    }
    else
        qDebug() << "create error";


    ok = query.exec("CREATE TABLE `nurse`  ( `NurseID` varchar(10) NOT NULL, `NurseName` varchar(100)  NOT NULL, `NurseQualificationFile` varchar(255)  NOT NULL, `QualificationExpiryDate` date NOT NULL, PRIMARY KEY (`NurseID`)) ;");
    if (ok)
    {
        qDebug() << QString::fromLocal8Bit("创建成功");
    }
    else
        qDebug() << "create error";


    ok = query.exec("CREATE TABLE `nurselogin`  (  `NurseID` varchar(10) NOT NULL,`Password` varchar(100)  NOT NULL,PRIMARY KEY (`NurseID`) ) ;");
    if (ok)
    {
        qDebug() << QString::fromLocal8Bit("创建成功");
    }
    else
        qDebug() << "create error";



    ok = query.exec("CREATE TABLE `vaccine`  ( `VaccineID` int NOT NULL, `VaccineName` varchar(100) NOT NULL, `VaccineType` varchar(100)  NOT NULL,`Barcode` varchar(100)  NOT NULL,`InjectionLocation` longblob NOT NULL,PRIMARY KEY (`VaccineID`) ) ;");
    if (ok)
    {
        qDebug() << QString::fromLocal8Bit("创建成功");
    }
    else
        qDebug() << "create error";
    return true;
}

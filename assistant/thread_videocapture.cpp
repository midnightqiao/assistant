#include "thread_videocapture.h"
#include <QDebug>
#include "opencv2/opencv.hpp"
#include "opencv2/opencv_modules.hpp"

using namespace std;

Thread_VideoCapture::Thread_VideoCapture(QThread *parent) : QThread(parent)
{
    stopped = false;
    this->savedPath = "live.avi";
    connect(this, &QThread::finished, this, [=]() {
        stopped = false;
        qDebug() << "finished slot";
        });
}

void Thread_VideoCapture::run()
{
    qDebug()<<QString::fromLocal8Bit("多线程---------开始OpenCV测试");

    cv::Mat a;
    cv::Mat img;
    cv::VideoCapture video(0);
    if(!video.isOpened())
    {
        qDebug()<<QString::fromLocal8Bit("摄像头未打开");
    }
    video >> img;
    if(img.empty())
    {
        qDebug()<<QString::fromLocal8Bit("未捕获到图像");
    }
    cv::VideoWriter writer;
    int codec = cv::VideoWriter::fourcc('M','J','P','G');
    double fps = 25.0;
    writer.open(savedPath.toStdString(),codec,fps,img.size(),true);
    if(!writer.isOpened())
    {
        qDebug()<<"输出失败";
    }
//    qDebug()<<"mark 1";
    while(!stopped)
    {
        if(!video.read(img))
        {
            qDebug()<<"摄像头断开连接";
        }
        cv::imshow("Live",img);
        writer<<img;

        cv::waitKey(50);
//        qDebug()<<"mark 2";
    }
    //资源释放
    cv::destroyAllWindows();
    video.release();
    writer.release();
    stopped = false;
}

void Thread_VideoCapture::stop()
{
    stopped = true;
}

void Thread_VideoCapture::setSavedPath(QString path)
{
    this->savedPath = path;
}

QString Thread_VideoCapture::getSavedPath()
{
    return this->savedPath;
}

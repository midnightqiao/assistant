#ifndef THREAD_VIDEOCAPTURE_H
#define THREAD_VIDEOCAPTURE_H

#include <QThread>
#include <QString>


class Thread_VideoCapture : public QThread
{
    Q_OBJECT
public:
    explicit Thread_VideoCapture(QThread *parent = nullptr);

    void run() override;

    void stop();

    void setSavedPath(QString path);

    QString getSavedPath();
signals:

private:
    volatile bool stopped;

    QString savedPath;

};

#endif // THREAD_VIDEOCAPTURE_H

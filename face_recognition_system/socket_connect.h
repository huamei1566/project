#ifndef SOCKET_CONNECT_H
#define SOCKET_CONNECT_H

#include "qtcpsocket.h"
#include <QWidget>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/objdetect/objdetect.hpp>
namespace Ui {
class socket_connect;
}

class socket_connect : public QWidget
{
    Q_OBJECT

public:
    explicit socket_connect(QWidget *parent = nullptr);
    cv::VideoCapture cap;
    cv::CascadeClassifier cascade;
    QTcpSocket msocket;
   // QString  getyourip();
   // int getintPost();

    QString yourip = "127.0.0.1";
    QString yourPost = "9999";
    int intPost = 9999;
    ~socket_connect();

public slots:


    void on_pushButton_clicked();

private:
    Ui::socket_connect *ui;
};

#endif // SOCKET_CONNECT_H

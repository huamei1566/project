#ifndef FACE_RECOGNITION_SYSTEM_H
#define FACE_RECOGNITION_SYSTEM_H

#include "socket_connect.h"
#include <QMainWindow>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/objdetect/objdetect.hpp>
#include <QTcpSocket>
#include <QTimer>


using namespace cv;
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui {
class face_recognition_system;
}
QT_END_NAMESPACE

class face_recognition_system : public QMainWindow
{
    Q_OBJECT

public:
    face_recognition_system(QWidget *parent = nullptr);
    ~face_recognition_system();
    //定时器
    socket_connect qq;
    void timerEvent(QTimerEvent *e);
private slots: //槽函数
    void timer_connect(); //链接
    void stop_connect();  //断开链接
    void start_connect(); //开始链接



    void recv_data();
    void on_connectBt_clicked();

    void on_pushButton_clicked();


private:
    Ui::face_recognition_system *ui;

    //摄像头
    VideoCapture cap;

    //haar--级联分类器
    cv::CascadeClassifier cascade;

    //创建网络套接字，定时器
    QTcpSocket msocket;
    QTimer mtimer;
    //标志是否是同一个人脸在被连续检查
    int flag;
    //保存人脸的数据
    Mat faceMat;
};
#endif // FACE_RECOGNITION_SYSTEM_H

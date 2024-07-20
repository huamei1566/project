#include "face_recognition_system.h"
#include "ui_face_recognition_system.h"
#include <QDebug>
#include <QPainter>
#include <QImage>
#include <QJsonDocument>
#include <QJsonParseError>
#include <QJsonObject>
face_recognition_system::face_recognition_system(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::face_recognition_system)
{
    ui->setupUi(this);
    //打开摄像头
    cap.open(0);
    //启动定时器事件
    startTimer(100);
    //导入级联分类器文件
    cascade.load("D:/opencv452/install/etc/haarcascades/haarcascade_frontalface_alt2.xml");

    //int post2 = socket_connect::in

    //QTcpSocket 断开连接时disconnnected信号
    //QTcpSocket 连接时connnected信号
    connect(&msocket,&QTcpSocket::disconnected,this,&face_recognition_system::start_connect);//断线重连
    connect(&msocket,&QTcpSocket::connected,this,&face_recognition_system::stop_connect);
    //关联接收器
    connect(&msocket, &QTcpSocket::readyRead,this,&face_recognition_system::recv_data);
    //定时器连接
    connect(&mtimer , &QTimer::timeout,this,&face_recognition_system::timer_connect);
    mtimer.start(5000);//每五秒连接一次，直到连接成功停止

    flag = 0;

    ui->widgetLb->hide();
}

face_recognition_system::~face_recognition_system()
{
    delete ui;
}

void face_recognition_system::timerEvent(QTimerEvent *e)
{


    //采集数据
    Mat srcImage;
    if(cap.grab())
    {
        cap.read(srcImage); //读取一针数据
        //把图片大小设计得和显示窗口一样
        cv::resize(srcImage,srcImage,Size(480,480));









    //使用灰度（检查速度更快）
    Mat grayImage;
    cvtColor(srcImage,grayImage,COLOR_BGR2GRAY);

    //检查人脸数据
    std::vector<Rect> objects; //人脸的方位设计
    cascade.detectMultiScale(grayImage,objects);
    if(objects.size()>0 && flag>=0)
    {    if(flag > 2){
        Rect rect =  objects.at(0); //第一个人脸的矩形框
        //移动人脸
        rectangle(srcImage,rect,Scalar(255,0,0));

        //移动锁定框（我自己的ui）
        ui->headpiclb->move(rect.x,rect.y);


        //把Mat数据转化为QbyteArray, --> 编码为jpg格式
        std::vector<uchar> buf;
        cv::imencode(".jpg",srcImage,buf);
        QByteArray byte((const char*)buf.data(),buf.size());

        //准备发送
        quint64 backsize = byte.size();
        QByteArray sendData;
        QDataStream stream(&sendData, QIODevice::WriteOnly); //流发送
        stream.setVersion(QDataStream::Qt_5_14);
        stream<<backsize<<byte;

        //发送
        msocket.write(sendData);
        flag = -2;
        //qDebug() << "发送";
        faceMat = srcImage(rect);
        //保存
        imwrite("./face.jpg",faceMat);

        }

        flag++;
        }
    if(objects.size() == 0)//如果没有检测到
    {
        //把人脸框放在中间
        ui->headpiclb->move(100,60);
        flag=0;

    }

    if(srcImage.data == nullptr) return;
    //把opencv里的Mat格式数据(BGR)转qt中的QImage（RGB）
    cvtColor(srcImage,srcImage,COLOR_BGR2RGB);
    QImage image(srcImage.data,srcImage.cols,srcImage.rows,srcImage.step1(),QImage::Format_RGB888);
    QPixmap mmp = QPixmap::fromImage((image));
   // mmp =mmp.scaledToWidth(ui->vdieLb->width());

    ui->vdieLb->setPixmap(mmp);
}
}
void face_recognition_system::recv_data(){


    QByteArray array = msocket.readAll();
    qDebug() << array;
    // qDebug() << msg;
    // ui->lineEdit->setText(msg);


    //开始解析(json)
    QJsonParseError err;
    QJsonDocument doc = QJsonDocument::fromJson(array,&err);
    if(err.error != QJsonParseError::NoError)
    {
        qDebug() << "json数据错误:" << err.errorString();
        return ;
    }

    QJsonObject obj = doc.object();
    QString employeeID = obj.value("employeeID").toString();
    QString name = obj.value("name").toString();
    QString department = obj.value("department").toString();
    QString timestr = obj.value("time").toString();

    ui->numberedit->setText(employeeID);
    ui->nameEdit->setText(name);
    ui->departmentEdit->setText(department);
    ui->timeEdit->setText(timestr);

   // // cvtColor(faceMat,faceMat,COLOR_BGR2RGB);
   //  QImage image(faceMat.data,faceMat.cols,faceMat.rows,faceMat.step1(),QImage::Format_RGB888);
   //  QPixmap mmp = QPixmap::fromImage((image));
   //  ui->headpiclb->setPixmap(mmp);

   //使用样式来显示图片
    ui->map->setStyleSheet("border-radius:75px;background-color: rgb(103, 103, 103);border-image:url(./face.jpg);");
    ui->widgetLb->show();

}

void face_recognition_system::timer_connect()
{
    //连接服务器

    msocket.connectToHost(qq.getyourip(),qq.getintPost());
    qDebug()<<  qq.getyourip() << " " << qq.getintPost();
    qDebug()<<"正在连接服务器";
}

void face_recognition_system::stop_connect()
{
    mtimer.stop();
    qDebug()<<"成功连接服务器";
}

void face_recognition_system::start_connect()
{
    mtimer.start(5000);//启动定时器
    qDebug()<<"断开";
}

void face_recognition_system::on_connectBt_clicked()
{

    qq.show();
    cap.release();
}


void face_recognition_system::on_pushButton_clicked()
{
    //打开摄像头
    cap.open(0);
    //启动定时器事件
    startTimer(100);

    //导入级联分类器文件
    cascade.load("D:/opencv452/install/etc/haarcascades/haarcascade_frontalface_alt2.xml");

}


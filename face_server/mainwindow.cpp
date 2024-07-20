#include "mainwindow.h"
#include "qdatetime.h"
#include "qsqlquery.h"
#include "ui_mainwindow.h"
#include <QThread>
#include <_mingw_mac.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //qtcpServer当有客服端连会发送newconnection
    connect(&mserver, &QTcpServer::newConnection,this,&MainWindow::accept_client);
    mserver.listen(QHostAddress::Any,9999);//监听

    //套接字大小的初始化
    bsize =  0;

    //给sql模型绑定表格
    model.setTable("employee");

    //创建一个线程
    QThread *thread = new QThread;
    //把QfaceOBject对象移动到thread线程中执行
    fobj.moveToThread(thread);

    //启动thread;
    thread->start();

    connect(this,&MainWindow::query,&fobj,&QFaceObject::face_query);
    //关联QFaceObject对象中的send_faceid信号
    connect(&fobj,&QFaceObject::send_faceid,this,&MainWindow::recv_faceid);

}

MainWindow::~MainWindow()
{
    delete ui;
}

//接受客服端连接
void MainWindow::accept_client()
{
   //获取与客户端通信的套接字
    msocket = mserver.nextPendingConnection();

    //当 客户端有数据到达会发送readyRead信号
    connect(msocket,&QTcpSocket::readyRead,this,&MainWindow::read_data);
}


//读取客服端发送的数据
void MainWindow::read_data(){

    QDataStream stream(msocket);
    stream.setVersion(QDataStream::Qt_5_14);

    if(bsize == 0){
        if(msocket->bytesAvailable()<(qint64)sizeof(bsize)) return;


        //采集数据的长度
        stream>>bsize;


    }

    if(msocket->bytesAvailable() < bsize)//说明数据还没发送完成,继续等待
        return;


    QByteArray data;
    stream>>data;
    bsize = 0;
    if(data.size() == 0)
    {

        return;
    }

    //显示图片
    QPixmap mmp;
    mmp.loadFromData(data,"jpg");
    mmp = mmp.scaled((ui->label->size()));
    ui->label->setPixmap(mmp);

    //识别人脸
    cv::Mat faceImage;
    std::vector<uchar> decode;
    decode.resize(data.size());
    memcpy(decode.data(),data.data(),data.size());
    faceImage =  cv::imdecode(decode,cv::IMREAD_COLOR);


    emit query(faceImage);
   //  int faceid = fobj.face_query(faceImage);//消耗资源过多
   // qDebug() <<"ok"<< faceid;

    // if(faceid < 0)
    // {
    //     QString sdmsg = QString("{\"employeeID\":\"%1\",\"name\":\"%2\",\"department\":\"软件\",\"time\":\"%3\"}");
    // }



    // // //从数据库中查询faceid对应的个人信息
    // // //给模型设置过滤器
    // // model.setFilter(QString("faceID=%1").arg(faceid));
    // // //查询
    // // model.select();
    // // //判断是否查询到数据
    // //     if(model.rowCount() == 1){
    // //     //工号 , 姓名 ,部门,时间
    // //     //{"employeeID":%1,""}
    // //     QSqlRecord record = model.record(0);
    // //     QString sdmsg = QString("{\"employeeID\":\"%1\",\"name\":\"%2\",\"department\":\"软件\",\"time\":\"%3\"}")
    // //                     .arg(record.value("employeeID").toString())
    // //                     .arg(record.value("name").toString())
    // //                     .arg(QDateTime::currentDateTime().toString("yyyy-MM-dd  hh:mm:ss"));

    // //     msocket->write(sdmsg.toUtf8());

    // //     //把数据写入数据库--考勤表

    // }


}

void MainWindow::recv_faceid(uint64_t faceid){


    qDebug() << "识别到的人脸id:" << faceid ;


    if(faceid < 0)
    {
        QString sdmsg = QString("{\"employeeID\":\"\",\"name\":\"\",\"department\":\"\",\"time\":\"\"}");
        msocket->write(sdmsg.toUtf8());
        return ;
    }



    //从数据库中查询faceid对应的个人信息
    //给模型设置过滤器
    model.setFilter(QString("faceID=%1").arg(faceid));
    //查询
    model.select();
    //判断是否查询到数据
    if(model.rowCount() == 1){
        //工号 , 姓名 ,部门,时间
        //{"employeeID":%1,""}
        QSqlRecord record = model.record(0);
        QString sdmsg = QString("{\"employeeID\":\"%1\",\"name\":\"%2\",\"department\":\"软件\",\"time\":\"%3\"}")
                            .arg(record.value("employeeID").toString())
                            .arg(record.value("name").toString())
                            .arg(QDateTime::currentDateTime().toString("yyyy-MM-dd  hh:mm:ss"));



        //把数据写入数据库--考勤表
        QString inserSql = QString("insert into attendance(employeeID) values('%1')").arg(record.value("employeeID").toString());
        QSqlQuery query;
        if(!query.exec(inserSql))
        {
            QString sdmsg = QString("{\"employeeID\":\"\",\"name\":\"\",\"department\":\"\",\"time\":\"\"}");
            msocket->write(sdmsg.toUtf8());
            return ;
        }
        else
        {
            msocket->write(sdmsg.toUtf8());
        }

}
}

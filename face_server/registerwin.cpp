#include "registerwin.h"
#include "qfaceobject.h"
#include "ui_registerwin.h"
#include <QFileDialog>
#include <QtSql/qsqltablemodel.h>
#include <QSqlRecord>
#include <QMessageBox>
registerwin::registerwin(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::registerwin)
{
    ui->setupUi(this);
}

registerwin::~registerwin()
{
    delete ui;
}

void registerwin::timerEvent(QTimerEvent *e)
{
    //获取摄像头数据并且显示在界面上


    if(cap.isOpened()){
        cap>>image;
        if(image.data == nullptr) return;
    }


    //Mat--->>QImage
    cv::Mat rgbImage;
    cv::cvtColor(image,rgbImage,cv::COLOR_BGR2RGB);
    QImage qimage(rgbImage.data,rgbImage.cols,rgbImage.rows,rgbImage.step1(),QImage::Format_RGB888) ;

    //在qt界面上显示
    QPixmap mmp = QPixmap::fromImage(qimage);
    mmp = mmp.scaledToWidth(ui->headpiclb->width());

    ui->headpiclb->setPixmap(mmp);

}

void registerwin::on_remakeBt_clicked()
{
    //清空数据
    ui->nameEdit->clear();
    ui->addressEdit->clear();
    ui->birthdayEdit->setDate(QDate::currentDate());
   // ui->setchanceEdit->clear();
    ui->iponenumberEdit->clear();
    ui->lineEdit->clear();



}


void registerwin::on_addfaceBt_clicked()
{
    //选择图片
    //通过文件选择框
    QString filepath =   QFileDialog::getOpenFileName(this);
    ui->lineEdit->setText(filepath);

    //显示图片
    QPixmap mmap(filepath);
    mmap = mmap.scaledToWidth(ui->headpiclb->width());
    ui->headpiclb->setPixmap(mmap);


}


void registerwin::on_addBt_clicked()
{
    //注册 and 添加
    //1.通过照片,结合faceObject模块得到faceID;
    QFaceObject facebj;
    cv::Mat image = cv::imread(ui->lineEdit->text().toUtf8().data());
    int faceID = facebj.face_register(image);

    //把头像保存在一个固定路径下
    QString headfile = QString("./data/%1.jpg").arg(QString(ui->nameEdit->text().toUtf8().toBase64()));
    cv::imwrite(headfile.toUtf8().data(), image);

    //2.把个人信息存储到数据库employee
    QSqlTableModel model;
    model.setTable("employee");
    QSqlRecord record = model.record();
    //设置数据
    record.setValue("name",ui->nameEdit->text());
    record.setValue("sex",ui->setchanceEdit->currentText());
    record.setValue("address",ui->addressEdit->text());
    record.setValue("phone",ui->iponenumberEdit->text());
    record.setValue("faceID" ,faceID);
    record.setValue("birthday", ui->birthdayEdit->text());
    //头像路径
    record.setValue("headfile",headfile);

    //把记录插入到数据库表格中
    bool ret = model.insertRecord(0,record);
    //3.提示注册成功
    if(ret){
        QMessageBox::information(this,"注册提示","注册成功");

       //提交
    model.submitAll();
    }
    else{
        QMessageBox::information(this,"注册提示","注册失败");


    }







}


void registerwin::on_openCameraBt_clicked()
{
  if(ui->openCameraBt->text() == "打开摄像头")
    {
        //打开摄像头
        if (cap.open(0)){
        ui->openCameraBt->setText("关闭摄像头");
        //启动定时器事件
        timerid = startTimer(100);
        }

    }


    else{
        killTimer(timerid);
        ui->openCameraBt->setText("打开摄像头");
        //关闭摄像头对象
        cap.release();//
    }



 }

void registerwin::on_photographBt_clicked()
{    QString headfile = QString("./data/%1.jpg").arg(QString(ui->nameEdit->text().toUtf8().toBase64()));
    ui->lineEdit->setText(headfile);
    cv::imwrite(headfile.toUtf8().data(), image);

    killTimer(timerid);
    ui->openCameraBt->setText("打开摄像头");
    //关闭摄像头对象
    cap.release();
}


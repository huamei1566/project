#include "mainwindow.h"
#include "selectwin.h"

#include <QApplication>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <registerwin.h>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/objdetect/objdetect.hpp>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qRegisterMetaType<cv::Mat>("cv::Mat&");
    qRegisterMetaType<cv::Mat>("cv::Mat");
    qRegisterMetaType<int64_t>("int64_t");
   // registerwin ww;
   // ww.show();


    //连接数据库
    QSqlDatabase db =QSqlDatabase::addDatabase("QSQLITE");
    //设置数据库名称
    db.setDatabaseName("server.db");

    //opnesqlite
    if(!db.open())
    {
        qDebug() <<db.lastError().text();
        return -1;
    }
    //创建员工信息表格
    QString createsql = "CREATE TABLE IF NOT EXISTS employee ("
                        "employeeID INTEGER PRIMARY KEY AUTOINCREMENT, "
                        "name VARCHAR(256), "
                        "sex VARCHAR(32), "
                        "birthday DATE, "
                        "address TEXT, "
                        "phone TEXT, "
                        "faceID INTEGER UNIQUE, "
                        "headfile TEXT"
                        ");";

    QSqlQuery query;
    if(!query.exec(createsql))
    {
        qDebug() <<query.lastError().text()<<" 1";
        return -1;
    }

    //创建考勤表格
    createsql = "CREATE TABLE IF NOT EXISTS attendance ("
                "attendanceID INTEGER PRIMARY KEY AUTOINCREMENT, "
                "employeeID INTEGER, " // 假设 employeeID 是一个外键，指向 employee 表的 employeeID 字段
                "attendanceTime TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP" // 使用 TIMESTAMP 代替 TimeStamp，并且提供默认值
                ");";

    if(!query.exec(createsql))
    {
        qDebug() <<query.lastError().text()<<" 2";
        return -1;
    }

    // SelectWin sw;
    // sw.show();

    MainWindow w;
    w.show();




    return a.exec();
}

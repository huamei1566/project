#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "qfaceobject.h"
#include <QMainWindow>
#include <QTcpSocket>
#include <QTcpServer>
#include <QSqlTableModel>
#include <QSqlRecord>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected slots:
    void read_data();
    void recv_faceid(uint64_t faceid);
signals:
    void query(cv::Mat& image); //查询信号


private slots:
    void accept_client();
private:
    Ui::MainWindow *ui;
    QTcpServer mserver;
    QTcpSocket *msocket;

    quint64 bsize;

    QFaceObject fobj;
    QSqlTableModel model;


};
#endif // MAINWINDOW_H

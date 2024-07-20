#include "socket_connect.h"
#include "ui_socket_connect.h"
#include <QString>
socket_connect::socket_connect(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::socket_connect)
{
    ui->setupUi(this);
    connect(ui->closeBt, &QPushButton::clicked, this, &QWidget::close);
}

// QString socket_connect::getyourip()
// {
//     return yourip;
// }

// int socket_connect::getintPost()
// {
//     return intPost;
// }

socket_connect::~socket_connect()
{
    delete ui;
}


void socket_connect::on_pushButton_clicked()
{

    QString yourip  = ui->label->text();
    QString yourPost =ui->label_2->text();
    int intPost = yourPost.toInt();


}


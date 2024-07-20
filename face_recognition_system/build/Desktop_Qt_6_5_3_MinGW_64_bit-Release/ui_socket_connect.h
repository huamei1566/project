/********************************************************************************
** Form generated from reading UI file 'socket_connect.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOCKET_CONNECT_H
#define UI_SOCKET_CONNECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_socket_connect
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeBt;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;

    void setupUi(QWidget *socket_connect)
    {
        if (socket_connect->objectName().isEmpty())
            socket_connect->setObjectName("socket_connect");
        socket_connect->resize(297, 136);
        widget = new QWidget(socket_connect);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 100, 281, 31));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        closeBt = new QPushButton(widget);
        closeBt->setObjectName("closeBt");

        horizontalLayout->addWidget(closeBt);

        widget1 = new QWidget(socket_connect);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(10, 0, 281, 91));
        gridLayout = new QGridLayout(widget1);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(widget1);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(widget1);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(widget1);
        lineEdit_2->setObjectName("lineEdit_2");

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);


        retranslateUi(socket_connect);

        QMetaObject::connectSlotsByName(socket_connect);
    } // setupUi

    void retranslateUi(QWidget *socket_connect)
    {
        socket_connect->setWindowTitle(QCoreApplication::translate("socket_connect", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("socket_connect", "\350\277\236\346\216\245", nullptr));
        closeBt->setText(QCoreApplication::translate("socket_connect", "\345\205\263\351\227\255", nullptr));
        label->setText(QCoreApplication::translate("socket_connect", "ip", nullptr));
        label_2->setText(QCoreApplication::translate("socket_connect", "\347\253\257\345\217\243", nullptr));
    } // retranslateUi

};

namespace Ui {
    class socket_connect: public Ui_socket_connect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOCKET_CONNECT_H

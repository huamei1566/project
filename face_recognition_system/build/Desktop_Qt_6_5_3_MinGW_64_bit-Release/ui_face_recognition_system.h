/********************************************************************************
** Form generated from reading UI file 'face_recognition_system.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACE_RECOGNITION_SYSTEM_H
#define UI_FACE_RECOGNITION_SYSTEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_face_recognition_system
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QWidget *widgetLb;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QLabel *vdieLb;
    QLabel *headpiclb;
    QWidget *widget_4;
    QLabel *label_3;
    QLabel *map;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *numberedit;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *nameEdit;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *departmentEdit;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *timeEdit;
    QPushButton *connectBt;
    QPushButton *pushButton;

    void setupUi(QMainWindow *face_recognition_system)
    {
        if (face_recognition_system->objectName().isEmpty())
            face_recognition_system->setObjectName("face_recognition_system");
        face_recognition_system->resize(800, 480);
        centralwidget = new QWidget(face_recognition_system);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 480, 480));
        widget->setStyleSheet(QString::fromUtf8(""));
        widgetLb = new QWidget(widget);
        widgetLb->setObjectName("widgetLb");
        widgetLb->setGeometry(QRect(90, 380, 291, 51));
        widgetLb->setStyleSheet(QString::fromUtf8("\n"
"border-radius:15px;\n"
"background-color: rgba(49, 50, 22,63);\n"
""));
        horizontalLayout = new QHBoxLayout(widgetLb);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(widgetLb);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(30, 20));
        label_2->setMaximumSize(QSize(30, 21));
        label_2->setStyleSheet(QString::fromUtf8("\n"
"border-image: url(:/123.png);\n"
"background-color: rgba(255, 255, 255, 0);"));

        horizontalLayout->addWidget(label_2);

        label = new QLabel(widgetLb);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(16);
        font.setBold(false);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgba(255, 255, 255, 0);"));
        label->setIndent(-3);

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        vdieLb = new QLabel(widget);
        vdieLb->setObjectName("vdieLb");
        vdieLb->setGeometry(QRect(0, 0, 480, 480));
        headpiclb = new QLabel(widget);
        headpiclb->setObjectName("headpiclb");
        headpiclb->setGeometry(QRect(80, 40, 311, 301));
        headpiclb->setStyleSheet(QString::fromUtf8("border-image: url(:/ready.png);"));
        vdieLb->raise();
        widgetLb->raise();
        headpiclb->raise();
        widget_4 = new QWidget(centralwidget);
        widget_4->setObjectName("widget_4");
        widget_4->setGeometry(QRect(480, 0, 320, 480));
        widget_4->setStyleSheet(QString::fromUtf8("background-color: rgb(34, 34, 34);"));
        label_3 = new QLabel(widget_4);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, 0, 321, 71));
        label_3->setStyleSheet(QString::fromUtf8("font: 26pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 255, 255);\n"
""));
        label_3->setAlignment(Qt::AlignCenter);
        map = new QLabel(widget_4);
        map->setObjectName("map");
        map->setGeometry(QRect(90, 60, 150, 150));
        map->setStyleSheet(QString::fromUtf8("border-radius:75px;\n"
"background-color: rgb(103, 103, 103);\n"
"\n"
""));
        layoutWidget = new QWidget(widget_4);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 240, 284, 191));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        widget_5 = new QWidget(layoutWidget);
        widget_5->setObjectName("widget_5");
        widget_5->setStyleSheet(QString::fromUtf8("QWigdet{\n"
"  border:\n"
"  border-radius:\n"
"  bordground-color:\n"
"\n"
"\n"
"}"));
        horizontalLayout_2 = new QHBoxLayout(widget_5);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_4 = new QLabel(widget_5);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(166, 166, 166);"));

        horizontalLayout_2->addWidget(label_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        numberedit = new QLineEdit(widget_5);
        numberedit->setObjectName("numberedit");
        numberedit->setMinimumSize(QSize(200, 20));
        numberedit->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-color: rgb(200, 0, 0);"));

        horizontalLayout_2->addWidget(numberedit);


        formLayout->setWidget(0, QFormLayout::LabelRole, widget_5);

        widget_6 = new QWidget(layoutWidget);
        widget_6->setObjectName("widget_6");
        widget_6->setStyleSheet(QString::fromUtf8("QWigdet{\n"
"  border:\n"
"  border-radius:\n"
"  bordground-color:\n"
"\n"
"\n"
"}"));
        horizontalLayout_3 = new QHBoxLayout(widget_6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_5 = new QLabel(widget_6);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(166, 166, 166);"));

        horizontalLayout_3->addWidget(label_5);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        nameEdit = new QLineEdit(widget_6);
        nameEdit->setObjectName("nameEdit");
        nameEdit->setMinimumSize(QSize(200, 20));
        nameEdit->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(nameEdit);


        formLayout->setWidget(1, QFormLayout::LabelRole, widget_6);

        widget_7 = new QWidget(layoutWidget);
        widget_7->setObjectName("widget_7");
        widget_7->setStyleSheet(QString::fromUtf8("QWigdet{\n"
"  border:\n"
"  border-radius:\n"
"  bordground-color:\n"
"\n"
"\n"
"}"));
        horizontalLayout_5 = new QHBoxLayout(widget_7);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_7 = new QLabel(widget_7);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(166, 166, 166);"));

        horizontalLayout_5->addWidget(label_7);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        departmentEdit = new QLineEdit(widget_7);
        departmentEdit->setObjectName("departmentEdit");
        departmentEdit->setMinimumSize(QSize(200, 20));
        departmentEdit->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(departmentEdit);


        formLayout->setWidget(2, QFormLayout::LabelRole, widget_7);

        widget_8 = new QWidget(layoutWidget);
        widget_8->setObjectName("widget_8");
        widget_8->setStyleSheet(QString::fromUtf8("QWigdet{\n"
"  border:\n"
"  border-radius:\n"
"  bordground-color:\n"
"\n"
"\n"
"}"));
        horizontalLayout_6 = new QHBoxLayout(widget_8);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_8 = new QLabel(widget_8);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(166, 166, 166);"));

        horizontalLayout_6->addWidget(label_8);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        timeEdit = new QLineEdit(widget_8);
        timeEdit->setObjectName("timeEdit");
        timeEdit->setMinimumSize(QSize(200, 20));
        timeEdit->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_6->addWidget(timeEdit);


        formLayout->setWidget(3, QFormLayout::LabelRole, widget_8);

        connectBt = new QPushButton(widget_4);
        connectBt->setObjectName("connectBt");
        connectBt->setGeometry(QRect(220, 450, 80, 18));
        connectBt->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(widget_4);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 450, 80, 18));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        face_recognition_system->setCentralWidget(centralwidget);

        retranslateUi(face_recognition_system);

        QMetaObject::connectSlotsByName(face_recognition_system);
    } // setupUi

    void retranslateUi(QMainWindow *face_recognition_system)
    {
        face_recognition_system->setWindowTitle(QCoreApplication::translate("face_recognition_system", "face_recognition_system", nullptr));
        label_2->setText(QString());
        label->setText(QCoreApplication::translate("face_recognition_system", " \350\256\244\350\257\201\346\210\220\345\212\237", nullptr));
        vdieLb->setText(QString());
        headpiclb->setText(QString());
        label_3->setText(QCoreApplication::translate("face_recognition_system", "\344\272\272\350\204\270\350\257\206\345\210\253\350\200\203\345\213\244\347\263\273\347\273\237", nullptr));
        map->setText(QString());
        label_4->setText(QCoreApplication::translate("face_recognition_system", "\345\267\245\345\217\267", nullptr));
        numberedit->setText(QCoreApplication::translate("face_recognition_system", "01001", nullptr));
        label_5->setText(QCoreApplication::translate("face_recognition_system", "\345\220\215\345\255\227", nullptr));
        nameEdit->setText(QCoreApplication::translate("face_recognition_system", "01001", nullptr));
        label_7->setText(QCoreApplication::translate("face_recognition_system", "\351\203\250\351\227\250", nullptr));
        departmentEdit->setText(QCoreApplication::translate("face_recognition_system", "01001", nullptr));
        label_8->setText(QCoreApplication::translate("face_recognition_system", "\346\227\266\351\227\264", nullptr));
        timeEdit->setText(QCoreApplication::translate("face_recognition_system", "01001", nullptr));
        connectBt->setText(QCoreApplication::translate("face_recognition_system", "\350\277\236\346\216\245\346\234\215\345\212\241\347\253\257", nullptr));
        pushButton->setText(QCoreApplication::translate("face_recognition_system", "\345\274\200\345\220\257\346\221\204\345\203\217\345\244\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class face_recognition_system: public Ui_face_recognition_system {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACE_RECOGNITION_SYSTEM_H

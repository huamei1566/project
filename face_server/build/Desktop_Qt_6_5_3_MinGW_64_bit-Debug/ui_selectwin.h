/********************************************************************************
** Form generated from reading UI file 'selectwin.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTWIN_H
#define UI_SELECTWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectWin
{
public:
    QTableView *tableView;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *pushButton;

    void setupUi(QWidget *SelectWin)
    {
        if (SelectWin->objectName().isEmpty())
            SelectWin->setObjectName("SelectWin");
        SelectWin->resize(400, 300);
        tableView = new QTableView(SelectWin);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(10, 50, 381, 231));
        widget = new QWidget(SelectWin);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 10, 182, 20));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(widget);
        radioButton->setObjectName("radioButton");

        horizontalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(widget);
        radioButton_2->setObjectName("radioButton_2");

        horizontalLayout->addWidget(radioButton_2);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);


        retranslateUi(SelectWin);

        QMetaObject::connectSlotsByName(SelectWin);
    } // setupUi

    void retranslateUi(QWidget *SelectWin)
    {
        SelectWin->setWindowTitle(QCoreApplication::translate("SelectWin", "Form", nullptr));
        radioButton->setText(QCoreApplication::translate("SelectWin", "\345\221\230\345\267\245\344\277\241\346\201\257", nullptr));
        radioButton_2->setText(QCoreApplication::translate("SelectWin", "\350\200\203\345\213\244", nullptr));
        pushButton->setText(QCoreApplication::translate("SelectWin", "\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectWin: public Ui_SelectWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTWIN_H

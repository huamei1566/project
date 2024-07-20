/********************************************************************************
** Form generated from reading UI file 'registerwin.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWIN_H
#define UI_REGISTERWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registerwin
{
public:
    QLabel *headpiclb;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *nameEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *addressEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *iponenumberEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *setchanceEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QDateEdit *birthdayEdit;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *addBt;
    QSpacerItem *horizontalSpacer;
    QPushButton *remakeBt;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *addfaceBt;
    QPushButton *openCameraBt;
    QPushButton *photographBt;

    void setupUi(QWidget *registerwin)
    {
        if (registerwin->objectName().isEmpty())
            registerwin->setObjectName("registerwin");
        registerwin->resize(506, 269);
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(13);
        registerwin->setFont(font);
        headpiclb = new QLabel(registerwin);
        headpiclb->setObjectName("headpiclb");
        headpiclb->setGeometry(QRect(220, 10, 201, 181));
        headpiclb->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 255);"));
        layoutWidget = new QWidget(registerwin);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 201, 181));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label);

        nameEdit = new QLineEdit(layoutWidget);
        nameEdit->setObjectName("nameEdit");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(nameEdit->sizePolicy().hasHeightForWidth());
        nameEdit->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(nameEdit);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label_2);

        addressEdit = new QLineEdit(layoutWidget);
        addressEdit->setObjectName("addressEdit");
        sizePolicy1.setHeightForWidth(addressEdit->sizePolicy().hasHeightForWidth());
        addressEdit->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(addressEdit);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label_3);

        iponenumberEdit = new QLineEdit(layoutWidget);
        iponenumberEdit->setObjectName("iponenumberEdit");
        sizePolicy1.setHeightForWidth(iponenumberEdit->sizePolicy().hasHeightForWidth());
        iponenumberEdit->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(iponenumberEdit);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        setchanceEdit = new QComboBox(layoutWidget);
        setchanceEdit->addItem(QString());
        setchanceEdit->addItem(QString());
        setchanceEdit->addItem(QString());
        setchanceEdit->setObjectName("setchanceEdit");
        sizePolicy.setHeightForWidth(setchanceEdit->sizePolicy().hasHeightForWidth());
        setchanceEdit->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(setchanceEdit);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(label_5);

        birthdayEdit = new QDateEdit(layoutWidget);
        birthdayEdit->setObjectName("birthdayEdit");
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(birthdayEdit->sizePolicy().hasHeightForWidth());
        birthdayEdit->setSizePolicy(sizePolicy2);

        horizontalLayout_5->addWidget(birthdayEdit);


        verticalLayout_2->addLayout(horizontalLayout_5);

        layoutWidget1 = new QWidget(registerwin);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 210, 201, 26));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        addBt = new QPushButton(layoutWidget1);
        addBt->setObjectName("addBt");

        horizontalLayout_6->addWidget(addBt);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        remakeBt = new QPushButton(layoutWidget1);
        remakeBt->setObjectName("remakeBt");

        horizontalLayout_6->addWidget(remakeBt);

        layoutWidget2 = new QWidget(registerwin);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(220, 200, 279, 57));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(layoutWidget2);
        lineEdit->setObjectName("lineEdit");

        verticalLayout_3->addWidget(lineEdit);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        addfaceBt = new QPushButton(layoutWidget2);
        addfaceBt->setObjectName("addfaceBt");

        horizontalLayout_7->addWidget(addfaceBt);

        openCameraBt = new QPushButton(layoutWidget2);
        openCameraBt->setObjectName("openCameraBt");

        horizontalLayout_7->addWidget(openCameraBt);

        photographBt = new QPushButton(layoutWidget2);
        photographBt->setObjectName("photographBt");

        horizontalLayout_7->addWidget(photographBt);


        verticalLayout_3->addLayout(horizontalLayout_7);


        retranslateUi(registerwin);

        QMetaObject::connectSlotsByName(registerwin);
    } // setupUi

    void retranslateUi(QWidget *registerwin)
    {
        registerwin->setWindowTitle(QCoreApplication::translate("registerwin", "Form", nullptr));
        headpiclb->setText(QString());
        label->setText(QCoreApplication::translate("registerwin", "\345\247\223\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("registerwin", "\345\234\260\345\235\200:", nullptr));
        label_3->setText(QCoreApplication::translate("registerwin", "\347\224\265\350\257\235:", nullptr));
        label_4->setText(QCoreApplication::translate("registerwin", "\346\200\247\345\210\253:", nullptr));
        setchanceEdit->setItemText(0, QCoreApplication::translate("registerwin", "\351\273\230\350\256\244", nullptr));
        setchanceEdit->setItemText(1, QCoreApplication::translate("registerwin", "\347\224\267", nullptr));
        setchanceEdit->setItemText(2, QCoreApplication::translate("registerwin", "\345\245\263", nullptr));

        label_5->setText(QCoreApplication::translate("registerwin", "\347\224\237\346\227\245:", nullptr));
        addBt->setText(QCoreApplication::translate("registerwin", "\346\267\273\345\212\240", nullptr));
        remakeBt->setText(QCoreApplication::translate("registerwin", "\351\207\215\347\275\256", nullptr));
        addfaceBt->setText(QCoreApplication::translate("registerwin", "\346\267\273\345\212\240\345\244\264\345\203\217", nullptr));
        openCameraBt->setText(QCoreApplication::translate("registerwin", "\346\211\223\345\274\200\346\221\204\345\203\217\345\244\264", nullptr));
        photographBt->setText(QCoreApplication::translate("registerwin", "\346\213\215\347\205\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registerwin: public Ui_registerwin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWIN_H

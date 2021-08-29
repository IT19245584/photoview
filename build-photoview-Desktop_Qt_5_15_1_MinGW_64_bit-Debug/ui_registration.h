/********************************************************************************
** Form generated from reading UI file 'registration.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATION_H
#define UI_REGISTRATION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registration
{
public:
    QFrame *frame;
    QFrame *frame_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QLabel *label_5;
    QLabel *resetStatus;
    QPushButton *login;
    QLineEdit *userName;
    QLineEdit *password;
    QLineEdit *repassword;

    void setupUi(QWidget *registration)
    {
        if (registration->objectName().isEmpty())
            registration->setObjectName(QString::fromUtf8("registration"));
        registration->resize(648, 503);
        QIcon icon;
        icon.addFile(QString::fromUtf8("D:/projects/photoviewer/PhotoView/multimedia-photo-viewer-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        registration->setWindowIcon(icon);
        registration->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: qlineargradient(spread:pad, x1:0.511, y1:0, x2:0.483, y2:1, stop:0 rgba(18, 190, 150, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        frame = new QFrame(registration);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(150, 50, 381, 421));
        frame->setStyleSheet(QString::fromUtf8("*{\n"
"    border-radius:7px;\n"
"	background-color: white;\n"
"box-shadow: 5px 10px 8px #888888;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 381, 71));
        frame_2->setStyleSheet(QString::fromUtf8("*{\n"
"    border-top-left-radius: 5px;\n"
"	\n"
"	background-color:rgb(13, 124, 100);\n"
"box-shadow:2px 3px 5px gray;\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 10, 251, 51));
        label->setStyleSheet(QString::fromUtf8("*{\n"
"   color:white;\n"
"letter-spacing:1px;\n"
"}"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 110, 91, 31));
        label_2->setStyleSheet(QString::fromUtf8("*{\n"
"		color: #262626;\n"
"}"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 180, 91, 31));
        label_3->setStyleSheet(QString::fromUtf8("*{\n"
"		color: #262626;\n"
"}"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 350, 301, 31));
        pushButton->setStyleSheet(QString::fromUtf8("*{\n"
"background-color:rgb(13, 124, 100);\n"
"border-radius:2px;\n"
"letter-spacing:1px;\n"
"font-size:13px;\n"
"color:white;\n"
"}"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 250, 141, 31));
        label_5->setStyleSheet(QString::fromUtf8("*{\n"
"		color: #262626;\n"
"}"));
        resetStatus = new QLabel(frame);
        resetStatus->setObjectName(QString::fromUtf8("resetStatus"));
        resetStatus->setGeometry(QRect(40, 320, 201, 20));
        resetStatus->setStyleSheet(QString::fromUtf8("*{\n"
"		color: #262626;\n"
"}"));
        login = new QPushButton(frame);
        login->setObjectName(QString::fromUtf8("login"));
        login->setGeometry(QRect(290, 390, 80, 21));
        login->setStyleSheet(QString::fromUtf8("*{\n"
"  color:black;\n"
"}"));
        userName = new QLineEdit(frame);
        userName->setObjectName(QString::fromUtf8("userName"));
        userName->setGeometry(QRect(40, 140, 301, 31));
        userName->setStyleSheet(QString::fromUtf8("*{\n"
"    border-radius: 5px;\n"
"	border: 1px solid #848484;\n"
"	outline:0;\n"
"padding-left:2px;\n"
"	box-shadow: 2px 3px 15px #848484;\n"
"   padding-top:2px;\n"
"}"));
        password = new QLineEdit(frame);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(40, 210, 301, 31));
        password->setStyleSheet(QString::fromUtf8("*{\n"
"    border-radius: 5px;\n"
"	border: 1px solid #848484;\n"
"	outline:0;\n"
"padding-left:2px;\n"
"	box-shadow: 2px 3px 15px #848484;\n"
"   padding-top:2px;\n"
"}"));
        password->setEchoMode(QLineEdit::Password);
        repassword = new QLineEdit(frame);
        repassword->setObjectName(QString::fromUtf8("repassword"));
        repassword->setGeometry(QRect(40, 280, 301, 31));
        repassword->setStyleSheet(QString::fromUtf8("*{\n"
"    border-radius: 5px;\n"
"	border: 1px solid #848484;\n"
"	outline:0;\n"
"padding-left:2px;\n"
"	box-shadow: 2px 3px 15px #848484;\n"
"   padding-top:2px;\n"
"}"));
        repassword->setEchoMode(QLineEdit::Password);
        frame_2->raise();
        label_2->raise();
        label_3->raise();
        pushButton->raise();
        label_5->raise();
        resetStatus->raise();
        login->raise();
        userName->raise();
        repassword->raise();
        password->raise();

        retranslateUi(registration);

        QMetaObject::connectSlotsByName(registration);
    } // setupUi

    void retranslateUi(QWidget *registration)
    {
        registration->setWindowTitle(QCoreApplication::translate("registration", "PhotVeiw", nullptr));
        label->setText(QCoreApplication::translate("registration", "<html><head/><body><p><span style=\" font-size:16pt;\">REGISTRATION FORM</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("registration", "<html><head/><body><p><span style=\" font-size:11pt;\">User Name</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("registration", "<html><head/><body><p><span style=\" font-size:11pt;\">Password</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("registration", "Registration", nullptr));
        label_5->setText(QCoreApplication::translate("registration", "<html><head/><body><p><span style=\" font-size:11pt;\">Re-Password</span></p></body></html>", nullptr));
        resetStatus->setText(QCoreApplication::translate("registration", "<html><head/><body><p><br/></p></body></html>", nullptr));
        login->setText(QCoreApplication::translate("registration", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registration: public Ui_registration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATION_H

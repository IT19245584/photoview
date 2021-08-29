/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QFrame *frame;
    QFrame *frame_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QLineEdit *userName;
    QLineEdit *password;
    QPushButton *reg;
    QPushButton *reset;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(752, 500);
        QIcon icon;
        icon.addFile(QString::fromUtf8("D:/projects/photoviewer/PhotoView/multimedia-photo-viewer-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        login->setWindowIcon(icon);
        login->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: qlineargradient(spread:pad, x1:0.511, y1:0, x2:0.483, y2:1, stop:0 rgba(18, 190, 150, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        frame = new QFrame(login);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(220, 60, 381, 341));
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
        label->setGeometry(QRect(120, 10, 201, 51));
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
        pushButton->setGeometry(QRect(40, 260, 301, 31));
        pushButton->setStyleSheet(QString::fromUtf8("*{\n"
"background-color:rgb(13, 124, 100);\n"
"border-radius:2px;\n"
"letter-spacing:1px;\n"
"font-size:13px;\n"
"color:white;\n"
"}"));
        userName = new QLineEdit(frame);
        userName->setObjectName(QString::fromUtf8("userName"));
        userName->setGeometry(QRect(40, 140, 301, 31));
        userName->setStyleSheet(QString::fromUtf8("*{\n"
"    border-radius: 5px;\n"
"	border: 1px solid #848484;\n"
"	outline:0;\n"
"	box-shadow: 2px 3px 15px #848484;\n"
"   padding-top:2px;\n"
"   padding-left:2px;\n"
"}"));
        password = new QLineEdit(frame);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(40, 210, 301, 31));
        password->setStyleSheet(QString::fromUtf8("*{\n"
"    border-radius: 5px;\n"
"	border: 1px solid #848484;\n"
"	outline:0;\n"
"	box-shadow: 2px 3px 15px #848484;\n"
"   padding-top:2px;\n"
"   padding-left:2px;\n"
"}"));
        password->setEchoMode(QLineEdit::Password);
        reg = new QPushButton(frame);
        reg->setObjectName(QString::fromUtf8("reg"));
        reg->setGeometry(QRect(30, 300, 80, 21));
        reg->setStyleSheet(QString::fromUtf8("*{\n"
"  color:black;\n"
"}"));
        reset = new QPushButton(frame);
        reset->setObjectName(QString::fromUtf8("reset"));
        reset->setGeometry(QRect(249, 300, 101, 21));
        reset->setStyleSheet(QString::fromUtf8("*{\n"
"  color:black;\n"
"}"));

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "Photoview", nullptr));
        label->setText(QCoreApplication::translate("login", "<html><head/><body><p><span style=\" font-size:16pt;\">LOGIN FORM</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("login", "<html><head/><body><p><span style=\" font-size:11pt;\">User Name</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("login", "<html><head/><body><p><span style=\" font-size:11pt;\">Password</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("login", "Login", nullptr));
        reg->setText(QCoreApplication::translate("login", "Registration", nullptr));
        reset->setText(QCoreApplication::translate("login", "Password Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H

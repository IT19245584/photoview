/********************************************************************************
** Form generated from reading UI file 'reset.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESET_H
#define UI_RESET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_reset
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
    QLineEdit *re_userName;
    QLineEdit *re_password;
    QLineEdit *re_typepassword;

    void setupUi(QWidget *reset)
    {
        if (reset->objectName().isEmpty())
            reset->setObjectName(QString::fromUtf8("reset"));
        reset->resize(645, 513);
        reset->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: qlineargradient(spread:pad, x1:0.511, y1:0, x2:0.483, y2:1, stop:0 rgba(18, 190, 150, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        frame = new QFrame(reset);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(140, 50, 381, 421));
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
        label->setGeometry(QRect(120, 10, 211, 51));
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
        re_userName = new QLineEdit(frame);
        re_userName->setObjectName(QString::fromUtf8("re_userName"));
        re_userName->setGeometry(QRect(40, 140, 301, 31));
        re_userName->setStyleSheet(QString::fromUtf8("*{\n"
"    border-radius: 5px;\n"
"	border: 1px solid #848484;\n"
"	outline:0;\n"
"padding-left:2px;\n"
"	box-shadow: 2px 3px 15px #848484;\n"
"   padding-top:2px;\n"
"}"));
        re_password = new QLineEdit(frame);
        re_password->setObjectName(QString::fromUtf8("re_password"));
        re_password->setGeometry(QRect(40, 210, 301, 31));
        re_password->setStyleSheet(QString::fromUtf8("*{\n"
"    border-radius: 5px;\n"
"	border: 1px solid #848484;\n"
"	outline:0;\n"
"padding-left:2px;\n"
"	box-shadow: 2px 3px 15px #848484;\n"
"   padding-top:2px;\n"
"}"));
        re_password->setEchoMode(QLineEdit::Password);
        re_typepassword = new QLineEdit(frame);
        re_typepassword->setObjectName(QString::fromUtf8("re_typepassword"));
        re_typepassword->setGeometry(QRect(40, 280, 301, 31));
        re_typepassword->setStyleSheet(QString::fromUtf8("*{\n"
"    border-radius: 5px;\n"
"	border: 1px solid #848484;\n"
"	outline:0;\n"
"padding-left:2px;\n"
"	box-shadow: 2px 3px 15px #848484;\n"
"   padding-top:2px;\n"
"}"));
        re_typepassword->setEchoMode(QLineEdit::Password);
        frame_2->raise();
        label_2->raise();
        label_3->raise();
        pushButton->raise();
        label_5->raise();
        resetStatus->raise();
        login->raise();
        re_userName->raise();
        re_typepassword->raise();
        re_password->raise();

        retranslateUi(reset);

        QMetaObject::connectSlotsByName(reset);
    } // setupUi

    void retranslateUi(QWidget *reset)
    {
        reset->setWindowTitle(QCoreApplication::translate("reset", "Form", nullptr));
        label->setText(QCoreApplication::translate("reset", "<html><head/><body><p><span style=\" font-size:16pt;\">RESET FORM</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("reset", "<html><head/><body><p><span style=\" font-size:11pt;\">User Name</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("reset", "<html><head/><body><p><span style=\" font-size:11pt;\">Password</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("reset", "Reset Password", nullptr));
        label_5->setText(QCoreApplication::translate("reset", "<html><head/><body><p><span style=\" font-size:11pt;\">Re-Password</span></p></body></html>", nullptr));
        resetStatus->setText(QCoreApplication::translate("reset", "<html><head/><body><p><br/></p></body></html>", nullptr));
        login->setText(QCoreApplication::translate("reset", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class reset: public Ui_reset {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESET_H

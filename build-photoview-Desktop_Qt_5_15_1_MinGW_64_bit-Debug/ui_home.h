/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_home
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *home)
    {
        if (home->objectName().isEmpty())
            home->setObjectName(QString::fromUtf8("home"));
        home->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8("D:/projects/photoviewer/PhotoView/multimedia-photo-viewer-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        home->setWindowIcon(icon);
        home->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: qlineargradient(spread:pad, x1:0.511, y1:0, x2:0.483, y2:1, stop:0 rgba(18, 190, 150, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        centralwidget = new QWidget(home);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 160, 301, 101));
        label->setStyleSheet(QString::fromUtf8("*{\n"
"	\n"
"  background-color:transparent;\n"
" color: black;\n"
"	font: 63 26pt \"Yu Gothic UI Semibold\";\n"
"}"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(420, 160, 301, 101));
        label_2->setStyleSheet(QString::fromUtf8("*{\n"
"	\n"
"  background-color:transparent;\n"
" color: yellow;\n"
"	font: 63 26pt \"Yu Gothic UI Semibold\";\n"
"}"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(270, 300, 291, 41));
        pushButton->setStyleSheet(QString::fromUtf8("*{\n"
"background-color:rgb(13, 124, 100);\n"
"border-radius:2px;\n"
"letter-spacing:1px;\n"
"font-size:26px;\n"
"color:white;\n"
"}"));
        home->setCentralWidget(centralwidget);
        menubar = new QMenuBar(home);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        home->setMenuBar(menubar);
        statusbar = new QStatusBar(home);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        home->setStatusBar(statusbar);

        retranslateUi(home);

        QMetaObject::connectSlotsByName(home);
    } // setupUi

    void retranslateUi(QMainWindow *home)
    {
        home->setWindowTitle(QCoreApplication::translate("home", "Photoview", nullptr));
        label->setText(QCoreApplication::translate("home", "WELCOME TO", nullptr));
        label_2->setText(QCoreApplication::translate("home", "<html><head/><body><p><span style=\" color:#ff5500;\">PHOTOVIEW</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("home", "Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class home: public Ui_home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H

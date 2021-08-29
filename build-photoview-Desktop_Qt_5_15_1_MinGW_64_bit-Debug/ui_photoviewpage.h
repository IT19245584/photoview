/********************************************************************************
** Form generated from reading UI file 'photoviewpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHOTOVIEWPAGE_H
#define UI_PHOTOVIEWPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_photoViewPage
{
public:
    QTreeView *treeView;
    QListView *listView;
    QLineEdit *txt_search;
    QLabel *label_3;
    QPushButton *searchBtn;
    QLineEdit *txt_image_format;
    QLabel *label_4;
    QPushButton *addImage;
    QComboBox *imFormat;
    QPushButton *pushButton_2;
    QPushButton *filter;
    QLabel *label_6;

    void setupUi(QWidget *photoViewPage)
    {
        if (photoViewPage->objectName().isEmpty())
            photoViewPage->setObjectName(QString::fromUtf8("photoViewPage"));
        photoViewPage->resize(1103, 660);
        QIcon icon;
        icon.addFile(QString::fromUtf8("D:/projects/photoviewer/PhotoView/multimedia-photo-viewer-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        photoViewPage->setWindowIcon(icon);
        photoViewPage->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: qlineargradient(spread:pad, x1:0.511, y1:0, x2:0.483, y2:1, stop:0 rgba(18, 190, 150, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        treeView = new QTreeView(photoViewPage);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setGeometry(QRect(10, 60, 491, 541));
        treeView->setStyleSheet(QString::fromUtf8("*{\n"
"    background:white;\n"
"}"));
        listView = new QListView(photoViewPage);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(520, 60, 571, 541));
        listView->setContextMenuPolicy(Qt::CustomContextMenu);
        listView->setStyleSheet(QString::fromUtf8("*{\n"
"    background:white;\n"
"}"));
        txt_search = new QLineEdit(photoViewPage);
        txt_search->setObjectName(QString::fromUtf8("txt_search"));
        txt_search->setGeometry(QRect(520, 30, 481, 24));
        txt_search->setStyleSheet(QString::fromUtf8("*{\n"
"    border-radius: 5px;\n"
"	border: 1px solid #848484;\n"
"	outline:0;\n"
"padding-left:2px;\n"
"background:white;\n"
"	box-shadow: 2px 3px 15px #848484;\n"
"   padding-top:2px;\n"
"}"));
        label_3 = new QLabel(photoViewPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(520, 10, 191, 21));
        label_3->setStyleSheet(QString::fromUtf8("*{\n"
"		color: white;\n"
"background:transparent;\n"
"}"));
        searchBtn = new QPushButton(photoViewPage);
        searchBtn->setObjectName(QString::fromUtf8("searchBtn"));
        searchBtn->setGeometry(QRect(1010, 30, 80, 24));
        searchBtn->setStyleSheet(QString::fromUtf8("*{\n"
"background-color:rgb(13, 124, 100);\n"
"border-radius:2px;\n"
"letter-spacing:1px;\n"
"font-size:13px;\n"
"color:white;\n"
"}"));
        txt_image_format = new QLineEdit(photoViewPage);
        txt_image_format->setObjectName(QString::fromUtf8("txt_image_format"));
        txt_image_format->setGeometry(QRect(230, 30, 201, 24));
        txt_image_format->setStyleSheet(QString::fromUtf8("*{\n"
"    border-radius: 5px;\n"
"	border: 1px solid #848484;\n"
"	outline:0;\n"
"padding-left:2px;\n"
"background:white;\n"
"	box-shadow: 2px 3px 15px #848484;\n"
"   padding-top:2px;\n"
"}"));
        label_4 = new QLabel(photoViewPage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(230, 10, 191, 21));
        label_4->setStyleSheet(QString::fromUtf8("*{\n"
"		color: white;\n"
"background:transparent;\n"
"}"));
        addImage = new QPushButton(photoViewPage);
        addImage->setObjectName(QString::fromUtf8("addImage"));
        addImage->setGeometry(QRect(439, 30, 61, 24));
        addImage->setStyleSheet(QString::fromUtf8("*{\n"
"background-color:rgb(13, 124, 100);\n"
"border-radius:2px;\n"
"letter-spacing:1px;\n"
"font-size:13px;\n"
"color:white;\n"
"}"));
        imFormat = new QComboBox(photoViewPage);
        imFormat->setObjectName(QString::fromUtf8("imFormat"));
        imFormat->setGeometry(QRect(10, 30, 161, 24));
        imFormat->setStyleSheet(QString::fromUtf8("*{\n"
"    border-radius: 5px;\n"
"	border: 1px solid #848484;\n"
"	outline:0;\n"
"padding-left:2px;\n"
"background:white;\n"
"	box-shadow: 2px 3px 15px #848484;\n"
"   padding-top:2px;\n"
"}"));
        pushButton_2 = new QPushButton(photoViewPage);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(989, 620, 101, 24));
        pushButton_2->setStyleSheet(QString::fromUtf8("*{\n"
"background-color:rgb(13, 124, 100);\n"
"border-radius:2px;\n"
"letter-spacing:1px;\n"
"font-size:13px;\n"
"color:white;\n"
"}"));
        filter = new QPushButton(photoViewPage);
        filter->setObjectName(QString::fromUtf8("filter"));
        filter->setGeometry(QRect(180, 30, 41, 24));
        filter->setStyleSheet(QString::fromUtf8("*{\n"
"background-color:rgb(13, 124, 100);\n"
"border-radius:2px;\n"
"letter-spacing:1px;\n"
"font-size:13px;\n"
"color:white;\n"
"}"));
        label_6 = new QLabel(photoViewPage);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 10, 191, 21));
        label_6->setStyleSheet(QString::fromUtf8("*{\n"
"		color: white;\n"
"background:transparent;\n"
"}"));
        listView->raise();
        treeView->raise();
        txt_search->raise();
        label_3->raise();
        searchBtn->raise();
        txt_image_format->raise();
        label_4->raise();
        addImage->raise();
        imFormat->raise();
        pushButton_2->raise();
        filter->raise();
        label_6->raise();

        retranslateUi(photoViewPage);

        QMetaObject::connectSlotsByName(photoViewPage);
    } // setupUi

    void retranslateUi(QWidget *photoViewPage)
    {
        photoViewPage->setWindowTitle(QCoreApplication::translate("photoViewPage", "PhotoView", nullptr));
        label_3->setText(QCoreApplication::translate("photoViewPage", "<html><head/><body><p><span style=\" font-size:11pt;\">Search Image Using Name</span></p></body></html>", nullptr));
        searchBtn->setText(QCoreApplication::translate("photoViewPage", "Search", nullptr));
        label_4->setText(QCoreApplication::translate("photoViewPage", "<html><head/><body><p><span style=\" font-size:11pt;\">Allowed Image Formats</span></p></body></html>", nullptr));
        addImage->setText(QCoreApplication::translate("photoViewPage", "Add", nullptr));
        pushButton_2->setText(QCoreApplication::translate("photoViewPage", "More Options", nullptr));
        filter->setText(QCoreApplication::translate("photoViewPage", "Filter", nullptr));
        label_6->setText(QCoreApplication::translate("photoViewPage", "<html><head/><body><p><span style=\" font-size:11pt;\">Select Image Type</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class photoViewPage: public Ui_photoViewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHOTOVIEWPAGE_H

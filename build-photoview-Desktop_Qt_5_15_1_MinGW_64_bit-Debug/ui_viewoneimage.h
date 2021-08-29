/********************************************************************************
** Form generated from reading UI file 'viewoneimage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWONEIMAGE_H
#define UI_VIEWONEIMAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_viewOneImage
{
public:
    QPushButton *pushButton;
    QLabel *label_pic;
    QSlider *horizontalSlider;
    QPushButton *reg;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *viewOneImage)
    {
        if (viewOneImage->objectName().isEmpty())
            viewOneImage->setObjectName(QString::fromUtf8("viewOneImage"));
        viewOneImage->resize(1141, 689);
        QIcon icon;
        icon.addFile(QString::fromUtf8("D:/projects/photoviewer/PhotoView/multimedia-photo-viewer-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewOneImage->setWindowIcon(icon);
        viewOneImage->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: qlineargradient(spread:pad, x1:0.511, y1:0, x2:0.483, y2:1, stop:0 rgba(18, 190, 150, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pushButton = new QPushButton(viewOneImage);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1040, 20, 80, 24));
        pushButton->setStyleSheet(QString::fromUtf8("*{\n"
"background-color:rgb(13, 124, 100);\n"
"border-radius:2px;\n"
"letter-spacing:1px;\n"
"font-size:13px;\n"
"color:white;\n"
"}"));
        label_pic = new QLabel(viewOneImage);
        label_pic->setObjectName(QString::fromUtf8("label_pic"));
        label_pic->setGeometry(QRect(110, 70, 1011, 601));
        label_pic->setStyleSheet(QString::fromUtf8("*{\n"
"  background:transparent;\n"
"}"));
        horizontalSlider = new QSlider(viewOneImage);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(680, 30, 160, 16));
        horizontalSlider->setStyleSheet(QString::fromUtf8("*{\n"
" background:transparent;\n"
"\n"
"}"));
        horizontalSlider->setOrientation(Qt::Horizontal);
        reg = new QPushButton(viewOneImage);
        reg->setObjectName(QString::fromUtf8("reg"));
        reg->setGeometry(QRect(660, 10, 141, 21));
        reg->setStyleSheet(QString::fromUtf8("*{\n"
"  color:white;\n"
"background:transparent;\n"
"border:none;\n"
"}"));
        pushButton_2 = new QPushButton(viewOneImage);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(959, 20, 71, 24));
        pushButton_2->setStyleSheet(QString::fromUtf8("*{\n"
"background-color:rgb(13, 124, 100);\n"
"border-radius:2px;\n"
"letter-spacing:1px;\n"
"font-size:13px;\n"
"color:white;\n"
"}"));
        pushButton_3 = new QPushButton(viewOneImage);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(860, 20, 91, 24));
        pushButton_3->setStyleSheet(QString::fromUtf8("*{\n"
"background-color:rgb(13, 124, 100);\n"
"border-radius:2px;\n"
"letter-spacing:1px;\n"
"font-size:13px;\n"
"color:white;\n"
"}"));

        retranslateUi(viewOneImage);

        QMetaObject::connectSlotsByName(viewOneImage);
    } // setupUi

    void retranslateUi(QWidget *viewOneImage)
    {
        viewOneImage->setWindowTitle(QCoreApplication::translate("viewOneImage", "PhotoView", nullptr));
        pushButton->setText(QCoreApplication::translate("viewOneImage", "Upload", nullptr));
        label_pic->setText(QString());
        reg->setText(QCoreApplication::translate("viewOneImage", "Image Crop", nullptr));
        pushButton_2->setText(QCoreApplication::translate("viewOneImage", "Normal", nullptr));
        pushButton_3->setText(QCoreApplication::translate("viewOneImage", "Color Effect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewOneImage: public Ui_viewOneImage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWONEIMAGE_H

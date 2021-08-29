#include "viewoneimage.h"
#include "ui_viewoneimage.h"

#include <QFileDialog>
#include <QLabel>
#include <QSlider>

viewOneImage::viewOneImage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::viewOneImage)
{
    ui->setupUi(this);
    QPixmap pix("/home/rpi/Desktop/Picture/Sample Pictures/photo.jpg");
       ui->label_pic->setPixmap(pix);
}

viewOneImage::~viewOneImage()
{
    delete ui;
}

void viewOneImage::on_pushButton_clicked()
{
       QFileDialog dialog(this);
       dialog.setNameFilter(tr("Images (*.png *.xpm *.jpg)"));
       dialog.setViewMode(QFileDialog::Detail);
       QString fileName = QFileDialog::getOpenFileName(this,
          tr("Open Images"), "/home/rpi/Desktop/Picture/Sample Pictures", tr("Image Files (*.png *.jpg *.bmp)"));
       if (!fileName.isEmpty())
       {
            QImage image(fileName);
            ui->label_pic->setPixmap(QPixmap::fromImage(image));

       }
}


void viewOneImage::on_horizontalSlider_valueChanged(int value)
{
      QSize size = ui->label_pic->pixmap()->size();
      size.setWidth((size.width() * value) / 100);
      size.setHeight((size.height() * value) / 100);
      ui->label_pic->resize(size);
}


void viewOneImage::on_pushButton_2_pressed()
{
     ui->horizontalSlider->setValue(100);
}


void viewOneImage::on_pushButton_3_pressed()
{
    QImage *qi = new QImage();
    QVector<QRgb> label_pic;
    for(int i = 0; i < 256; i++) label_pic.push_back(qRgb(i,i,i));
    qi->setColorTable(label_pic);
}


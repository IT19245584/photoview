#ifndef VIEWONEIMAGE_H
#define VIEWONEIMAGE_H

#include <QWidget>


namespace Ui {
class viewOneImage;
}

class viewOneImage : public QWidget
{
    Q_OBJECT

public:
    explicit viewOneImage(QWidget *parent = nullptr);
    ~viewOneImage();

private slots:
    void on_pushButton_clicked();

    void on_horizontalSlider_valueChanged(int value);

    void on_pushButton_2_pressed();

    void on_pushButton_3_pressed();

private:
    Ui::viewOneImage *ui;
};

#endif // VIEWONEIMAGE_H

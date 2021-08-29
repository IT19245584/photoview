#ifndef PHOTOVIEWPAGE_H
#define PHOTOVIEWPAGE_H

#include <QWidget>
#include <QtCore>
#include <QtGui>
#include <QFileSystemModel>
#include "viewoneimage.h"


namespace Ui {
class photoViewPage;
}

class photoViewPage : public QWidget
{
    Q_OBJECT

public:
    explicit photoViewPage(QWidget *parent = nullptr);
    ~photoViewPage();

private slots:
    void on_treeView_clicked(const QModelIndex &index);

    void on_pushButton_pressed();

    void on_addImage_pressed();

    void on_listView_clicked(const QModelIndex &index);


    void on_pushButton_2_pressed();

    void on_filter_pressed();

    void on_searchBtn_pressed();

    void on_listView_customContextMenuRequested(const QPoint &pos);

private:
    Ui::photoViewPage *ui;
    viewOneImage viewOneImage;
    QFileSystemModel *dirmodel;
    QFileSystemModel *filemodel;


};

#endif // PHOTOVIEWPAGE_H

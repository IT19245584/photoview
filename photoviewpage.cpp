#include "photoviewpage.h"
#include "ui_photoviewpage.h"
#include <QTreeView>
#include <QTableView>
#include <QLineEdit>
#include <QMessageBox>
#include <QComboBox>
#include <QString>

QString mPath = "C:/";
QString fPath = "";

photoViewPage::photoViewPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::photoViewPage)
{
    ui->setupUi(this);
    ui->imFormat->addItem("All");
    QFile file("fileFormat.txt");
    if (file.open(QIODevice::ReadOnly| QIODevice::WriteOnly | QIODevice::Text))
    {
    QTextStream stream(&file);
    qDebug()<<stream.seek(0);
    while (!stream.atEnd())
    {
        QString result = stream.readLine();
        QStringList list1 = result.split(',');

        for (int x = 0; x <= list1.count()-1; x++) {
             ui->imFormat->addItem(list1[x]);
        }

    }
    file.close();
    }else{}


    QTreeView treeView;
    QStringList sDriveFilters;



    dirmodel = new QFileSystemModel(this);
    dirmodel->setFilter(QDir::NoDotAndDotDot | QDir::AllDirs);
    dirmodel->setRootPath(mPath);
    ui->treeView->setModel(dirmodel);


    filemodel = new QFileSystemModel(this);
    QString wanted_formats =  ui->imFormat->currentText();
    QString filter_want_farmat;
    if(wanted_formats == "All"){
        filter_want_farmat = "*.jpg,*.png,*.jpeg,*.gif,*.webp";
    }else{
        filter_want_farmat = wanted_formats;
    }


    QStringList List;
    List = filter_want_farmat.split(",");


    filemodel->setFilter(QDir::NoDotAndDotDot | QDir::AllDirs );
    filemodel->setFilter( QDir::Files | QDir::NoDotAndDotDot );
    filemodel->setNameFilters(List);
    filemodel->setNameFilterDisables(false);
    filemodel->setRootPath(fPath);
    ui->listView->setModel(filemodel);


}

photoViewPage::~photoViewPage()
{
    delete ui;
}

void photoViewPage::on_treeView_clicked(const QModelIndex &index)
{
    QString mPath = dirmodel->fileInfo(index).absoluteFilePath();
    ui->listView->setRootIndex(filemodel->setRootPath(mPath));
}


void photoViewPage::on_pushButton_pressed()
{
    QString searchText;
    QLineEdit QLineEdit;
    QMessageBox msgBox;

    searchText = ui->txt_search->text();

}


void photoViewPage::on_addImage_pressed()
{
    QString new_formats;
    QLineEdit QLineEdit;
    QMessageBox msgBox;

    //get current format
    new_formats = ui->txt_image_format->text();

    QFile file("fileFormat.txt");
    if (file.open(QIODevice::Append))
    {
    QTextStream stream(&file);
    stream << new_formats << ",";

    msgBox.setText("Image Format Adding Success");
    msgBox.exec();


    file.close();
    }else{
        msgBox.setText("Image Format Adding Not Success");
        msgBox.exec();
    }
    photoViewPage *photoPage =new photoViewPage();
    this->hide();
    photoPage->show();
}


void photoViewPage::on_listView_clicked(const QModelIndex &index)
{
    QMessageBox msgBox;
    QString mPath = filemodel->fileInfo(index).absoluteFilePath();

    QMessageBox message(QMessageBox::NoIcon, mPath, "");

    message.setIconPixmap(QPixmap(mPath));
    message.exec();

}


void photoViewPage::on_pushButton_2_pressed()
{
    this->hide();
    viewOneImage.show();
}


void photoViewPage::on_filter_pressed()
{
    QString image_format_want;
    QLineEdit QLineEdit;
    QMessageBox msgBox;

    //combobox value
    image_format_want = ui->imFormat->currentText();

    msgBox.setText("You can see "+image_format_want+" format images");
    msgBox.exec();

    if(image_format_want != "All"){

        filemodel->setFilter(QDir::NoDotAndDotDot | QDir::AllDirs );
        filemodel->setFilter( QDir::Files | QDir::NoDotAndDotDot );
        filemodel->setNameFilters( QStringList() << image_format_want );
        filemodel->setNameFilterDisables(false);
        filemodel->setRootPath(fPath);
        ui->listView->setModel(filemodel);
    }else{

        filemodel->setFilter(QDir::NoDotAndDotDot | QDir::AllDirs );
        filemodel->setFilter( QDir::Files | QDir::NoDotAndDotDot );
        filemodel->setNameFilters( QStringList() << "*.jpg" << "*.png"<< "*.webp" << "*.gif"<< "*.jpeg" );
        filemodel->setNameFilterDisables(false);
        filemodel->setRootPath(fPath);
        ui->listView->setModel(filemodel);
    }
}


void photoViewPage::on_searchBtn_pressed()
{
    QString searchText;
    QLineEdit QLineEdit;
    QMessageBox msgBox;

    //search box value
     searchText = ui->txt_search->text();

    filemodel->setFilter(QDir::NoDotAndDotDot | QDir::AllDirs );
    filemodel->setFilter( QDir::Files | QDir::NoDotAndDotDot );
    filemodel->setNameFilters( QStringList() << "%"<<searchText<<"%" );
    filemodel->setNameFilterDisables(false);
    filemodel->setRootPath(fPath);
    ui->listView->setModel(filemodel);
}


void photoViewPage::on_listView_customContextMenuRequested(const QPoint &pos)
{


}


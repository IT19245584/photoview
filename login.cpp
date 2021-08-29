#include "login.h"
#include "ui_login.h"
#include <QMessageBox>
#include <QLineEdit>
#include <iostream>
#include <fstream>
#include <QTextStream>
#include <QFile>

login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::on_pushButton_pressed()
{
    QString password, userName;
    QLineEdit QLineEdit;
    QMessageBox msgBox;

    password = ui->password->text();
    userName = ui->userName->text();

    QFile file("user.txt");
    if (file.open(QIODevice::ReadOnly| QIODevice::WriteOnly | QIODevice::Text))
    {
    QTextStream stream(&file);
    qDebug()<<stream.seek(0);
    while (!stream.atEnd())
    {
        QString result = stream.readLine();
        QStringList list1 = result.split(',');

        if(password==list1[1] && userName== list1[0]){
            msgBox.setText("Login Success");
            msgBox.exec();

            this->hide();
            photoViewPage.show();
        }else{
            msgBox.setText("Login Unsuccess");
            msgBox.exec();
        }


    }
    file.close();
    }else{
        msgBox.setText("Registration Not Success");
        msgBox.exec();
    }
}


void login::on_reg_pressed()
{

    registration.show();
}


void login::on_reset_pressed()
{

}


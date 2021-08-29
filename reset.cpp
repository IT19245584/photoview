#include "reset.h"
#include "ui_reset.h"
#include <QMessageBox>
#include <QLineEdit>
#include <iostream>
#include <fstream>
#include <QTextStream>
#include <QFile>

reset::reset(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::reset)
{
    ui->setupUi(this);
}

reset::~reset()
{
    delete ui;
}

void reset::on_login_pressed()
{
    login.show();
}


void reset::on_pushButton_pressed()
{
    QString reset_password, reset_userName, reset_repassword;
    QLineEdit QLineEdit;
    QMessageBox msgBox;

    reset_password = ui->re_password->text();
    reset_repassword = ui->re_typepassword->text();
    reset_userName = ui->re_userName->text();

    if(reset_password == reset_repassword ){

        QFile file("user.txt");
        if (file.open(QIODevice::ReadOnly| QIODevice::WriteOnly | QIODevice::Text))
        {
        QTextStream stream(&file);
        qDebug()<<stream.seek(0);
        while (!stream.atEnd())
        {
            QString result = stream.readLine();

            QStringList list1 = result.split(',');

            if(reset_userName==list1[0]){

            msgBox.setText("Registration Success");
            msgBox.exec();

            QFile file("user.txt");
            if (file.open(QIODevice::ReadOnly| QIODevice::WriteOnly | QIODevice::Text))
            {
            QTextStream stream(&file);
            stream << reset_userName << "," << reset_repassword;

            msgBox.setText("Registration Success");
            msgBox.exec();
            this->hide();

            file.close();
            }else{
                msgBox.setText("Registration Not Success");
                msgBox.exec();
            }

           }else{
                msgBox.setText("Invalid Username");
                msgBox.exec();
            }
        }
      }
    }else{
        msgBox.setText("Passwords Are Not Matching");
        msgBox.exec();
    }
}


#include "registration.h"
#include "ui_registration.h"
#include <QMessageBox>
#include <QLineEdit>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <QTextStream>
#include <QFile>
using namespace std;

registration::registration(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::registration)
{
    ui->setupUi(this);
}

registration::~registration()
{
    delete ui;
}

void registration::on_login_pressed()
{

}


void registration::on_pushButton_pressed()
{
    QString password, userName, repassword;
    QLineEdit QLineEdit;
    QMessageBox msgBox;

    password = ui->password->text();
    repassword = ui->repassword->text();
    userName = ui->userName->text();

    if(repassword == password ){

        msgBox.setText("Registration Success");
        msgBox.exec();

        QFile file("user.txt");
        if (file.open(QIODevice::ReadOnly| QIODevice::WriteOnly | QIODevice::Text))
        {
        QTextStream stream(&file);
        stream << userName << "," << repassword;

        msgBox.setText("Registration Success");
        msgBox.exec();
        this->hide();

        file.close();
        }else{
            msgBox.setText("Registration Not Success");
            msgBox.exec();
        }

    }else{
        msgBox.setText("Passwords Are Not Matching");
        msgBox.exec();
    }
}


void registration::on_repassword_textChanged(const QString &arg1)
{

}


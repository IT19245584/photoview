#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include "registration.h"
#include "photoviewpage.h"

namespace Ui {
class login;
}

class login : public QWidget
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_pushButton_pressed();

    void on_reg_pressed();

    void on_reset_pressed();

private:
    Ui::login *ui;
    registration registration;
    photoViewPage photoViewPage;

};

#endif // LOGIN_H

#ifndef RESET_H
#define RESET_H

#include <QWidget>
#include "login.h"
namespace Ui {
class reset;
}

class reset : public QWidget
{
    Q_OBJECT

public:
    explicit reset(QWidget *parent = nullptr);
    ~reset();

private slots:
    void on_login_pressed();

    void on_pushButton_pressed();

private:
    Ui::reset *ui;
    login login;
};

#endif // RESET_H

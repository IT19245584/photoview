#ifndef HOME_H
#define HOME_H

#include <QMainWindow>
#include "login.h"


QT_BEGIN_NAMESPACE
namespace Ui { class home; }
QT_END_NAMESPACE

class home : public QMainWindow
{
    Q_OBJECT

public:
    home(QWidget *parent = nullptr);
    ~home();

private slots:
    void on_pushButton_pressed();

private:
    Ui::home *ui;
    login loginpage;
};
#endif // HOME_H

#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <QWidget>


namespace Ui {
class registration;
}

class registration : public QWidget
{
    Q_OBJECT

public:
    explicit registration(QWidget *parent = nullptr);
    ~registration();

private slots:
    void on_login_pressed();

    void on_pushButton_pressed();

    void on_repassword_textChanged(const QString &arg1);

private:
    Ui::registration *ui;
};

#endif // REGISTRATION_H

#ifndef MAINFORM_H
#define MAINFORM_H

#include <QMainWindow>
#include <QLabel>
class MainForm : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainForm(QWidget *parent = 0);

signals:
    void display(int number);
public slots:
private:
    QLabel *tipLbl;  //"欢迎登录"标签
};

#endif // MAINFORM_H

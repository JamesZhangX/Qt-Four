#ifndef ADDMATERIALSWIDGET_H
#define ADDMATERIALSWIDGET_H

#include <QWidget>
#include <QFile>
#include <QMessageBox>
#include <QDebug>

namespace Ui {
class AddMaterialsWidget;
}

class AddMaterialsWidget : public QWidget
{
    Q_OBJECT

public:
    explicit AddMaterialsWidget(QWidget *parent = nullptr);
    ~AddMaterialsWidget();

private:
    Ui::AddMaterialsWidget *ui;

signals:
    void display(int number);

private slots:
    void on_returnButton_clicked();
    void on_addButton_clicked();
};

#endif // ADDMATERIALSWIDGET_H

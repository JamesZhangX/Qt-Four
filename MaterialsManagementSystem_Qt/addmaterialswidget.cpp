#include "addmaterialswidget.h"
#include "ui_addmaterialswidget.h"


AddMaterialsWidget::AddMaterialsWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddMaterialsWidget)
{
    ui->setupUi(this);
}

AddMaterialsWidget::~AddMaterialsWidget()
{
    delete ui;
}
void AddMaterialsWidget::on_returnButton_clicked(){   //"主菜单"按钮点击
    emit display(0);
}

void AddMaterialsWidget::on_addButton_clicked(){  //"添加"按钮点击
    QString name = ui->namelineEdit->text();

    int id = ui->idlineEdit->text().toInt();

    int money = ui->moneylineEdit->text().toInt();

    int num = ui->numlineEdit->text().toInt();

    int date = ui->datelineEdit->text().toInt();

    if(ui->namelineEdit->text() == "" || ui->idlineEdit->text() == "" || ui->moneylineEdit->text() == "" || ui->numlineEdit->text() == "" || ui->datelineEdit->text() == ""){
        //插入的五项数据都不能为空，否则在读取文件时会出现问题。
        QMessageBox::about(NULL, "反馈", "存在空项");
    }
    QFile file("materials.txt");

    file.open(QIODevice::WriteOnly|QIODevice::Text|QIODevice::Append);
    //open()可以用来打开文件这里QIODevice::WriteOnly代表将文件以只写的方式打开
    //QIODevice::Text代表我们打开的是文本文件，QIODevice::Text会对end-of-line结束符进行转译
    //QIODevice::Append以追加的方式打开，新增加的内容将被追加到文件末尾
    if(!file.isOpen()){ //如果数据文件没有打开，弹出对话框提示用户
        QMessageBox::about(NULL, "反馈", "数据文件打开失败");
        return;
    }
    QTextStream out(&file);
    //QTextStream可以进行一些基本的文本读写，比如QString int char之类的数据QDataStream可以进行一个如QMap QPoint之类数据的读写。
    out << name << " " <<  id << " " << money << " " << num << " " << date << endl;
    //将我们刚刚获取的数据写入文件
    file.close();
    QMessageBox::about(NULL, "反馈", "插入成功");
    ui->namelineEdit->clear();
    ui->idlineEdit->clear();
    ui->moneylineEdit->clear();
    ui->numlineEdit->clear();
    ui->datelineEdit->clear();
    //将用户输入的数据清空
}

#include "selectwidget.h"
#include "ui_selectwidget.h"

SelectWidget::SelectWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SelectWidget)
{
    ui->setupUi(this);
}

SelectWidget::~SelectWidget()
{
    delete ui;
}

void SelectWidget::on_returnButton_clicked(){
    emit display(0);
}

void SelectWidget::on_selectButton_clicked(){
    if(ui->idlineEdit->text() == ""){
        QMessageBox::about(NULL, "反馈", "id不能为空");
        return;
    }
    QFile file("materials.txt");
    file.open(QIODevice::ReadOnly|QIODevice::Text);
    //以只读的方式打开文本文件
    if(!file.isOpen()){ //文件打开失败
        QMessageBox::about(NULL, "反馈", "文件打开失败");
        return;
    }
    QTextStream inp(&file);
    //以file作为Qt文本流
    QVector<StudentInfo> allStudentInfo;
    //数据类型为StudentInfo的QVector容器
    while(!inp.atEnd()){ //读到文件结尾
        QString name;
        int id, math, english, languageC;
        inp >> name >> id >> math >> english >> languageC;
        allStudentInfo.push_back(StudentInfo(name, id, math, english, languageC));
        //调用之前建立的构造函数实例化一个StudentInfo对象并将其加入allStudentInfo
    }
    allStudentInfo.pop_back();
    //扔掉最后的无用数据
    file.close();
    //关闭文件
    int id = ui->idlineEdit->text().toInt();
    bool flag = false;
    for(auto i : allStudentInfo){
        if(i.getId() == id){
            ui->showNamelabel->setText(i.getName());
            ui->showMoneylabel->setText(QString::number(i.getMoney()));
            ui->showNumlabel->setText(QString::number(i.getNum()));
            ui->showDatelabel->setText(QString::number(i.getDate()));

            flag = true;
            break;
        }
    }
    if(!flag){
       QMessageBox::about(NULL, "反馈", "id不存在！");
    }
    ui->idlineEdit->clear();
}

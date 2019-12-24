#include "modifywidget.h"
#include "ui_modifywidget.h"

ModifyWidget::ModifyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ModifyWidget)
{
    ui->setupUi(this);
}

ModifyWidget::~ModifyWidget()
{
    delete ui;
}

void ModifyWidget::on_returnButton_clicked(){
    emit display(0);
}


void ModifyWidget::on_modifyButton_clicked(){
    if(ui->namelineEdit->text() == "" || ui->idlineEdit->text() == "" || ui->moneylineEdit->text() == "" || ui->numlineEdit->text() == "" || ui->datelineEdit->text() == ""){
        QMessageBox::about(NULL, "反馈", "存在空项");
        return;
    }
    QVector<StudentInfo> allStudentInfo;    //数据类型为StudentInfo的QVector容器
    QFile file("materials.txt");
    file.open(QIODevice::ReadOnly|QIODevice::Text);
    //以只读 的方式打开文本文件
    if(!file.isOpen()){ //如果数据文件没有打开，弹出对话框提示用户
        QMessageBox::about(NULL, "反馈", "数据文件打开失败");
        return;
    }
    //QIODevice::Truncate在写入时会从文件开始处写入，覆盖原有内容
    QTextStream inp(&file);
    //以file建立一个QT的文本流
    while(!inp.atEnd()){
        QString name;
        int id, money, num, date;
        inp >> name >> id >> money >> num >> date;

        allStudentInfo.push_back(StudentInfo(name, id, money, num, date));
        //调用之前建立的构造函数实例化一个StudentInfo对象并将其加入allStudentInfo
    }
    allStudentInfo.pop_back();  //文件最后会多读一个无用数据，将其拿出
    file.close();
    int id = ui->idlineEdit->text().toInt();
    QString name = ui->namelineEdit->text();
    int money = ui->moneylineEdit->text().toInt();
    int num = ui->numlineEdit->text().toInt();
    int date = ui->datelineEdit->text().toInt();
    bool flag = false;
    for(QVector<StudentInfo>::iterator it = allStudentInfo.begin(); it != allStudentInfo.end(); it++){
        if(it->getId() == id){
            it->setName(name);
            it->setMoney(money);
            it->setNum(num);
            it->setDate(date);
            flag = true;
        }
    }
    if(flag){   //如果进行过修改，弹出对话框并更新文件
        QMessageBox::about(NULL, "反馈", "修改成功");
        file.open(QIODevice::WriteOnly|QIODevice::Text|QIODevice::Truncate);
        //以只写覆盖的方式打开文本文件
        if(!file.isOpen()){ //如果数据文件没有打开，弹出对话框提示用户
            QMessageBox::about(NULL, "反馈", "数据文件打开失败");
            return;
        }
        QTextStream out(&file);
        for(auto i : allStudentInfo){
            out << i.getName() << " " << i.getId() << " " << i.getMoney() << " " << i.getNum() << " " << i.getDate() << endl;
        }
        file.close();
    }else{
        //如果没有进行修改，弹出不存在对话框
         QMessageBox::about(NULL, "反馈", "id不存在！");
    }
    //关闭文件
    ui->idlineEdit->clear();
    ui->namelineEdit->clear();
    ui->moneylineEdit->clear();
    ui->numlineEdit->clear();
    ui->datelineEdit->clear();
    //清空所有输入框
}

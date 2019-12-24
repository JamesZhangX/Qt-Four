#ifndef STUDENTINFO_H
#define STUDENTINFO_H
#include "QString"

class StudentInfo
{
private:
    QString name;
    int id, money, num, date;

public:
    StudentInfo();
    StudentInfo(QString tname, int tid, int tmoney, int tnum, int tdate){
        name = tname;
        id = tid;
        money = tmoney;
        num = tnum;
        date = tdate;

    }
    int getId(){
        return id;
    }
    QString getName(){
        return name;
    }
    int getMoney(){
        return money;
    }
    int getNum(){
        return num;
    }
    int getDate(){
        return date;
    }

    void setId(int tid){
        id = tid;
    }
    void setName(QString tname){
        name = tname;
    }
    void setMoney(int tmoney){
        money = tmoney;

    }
    void setNum(int tnum){
        num = tnum;

    }
    void setDate(int tdate){
        date = tdate;

    }
};

#endif // STUDENTINFO_H

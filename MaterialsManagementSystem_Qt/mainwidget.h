#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <QStackedLayout>
#include "menuwidget.h"
#include "addmaterialswidget.h"
#include "selectwidget.h"
#include "modifywidget.h"
#include "sortwidget.h"
#include "mainform.h"
#include "loginform.h"
namespace Ui {
class MainWidget;
}

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MainWidget(QWidget *parent = nullptr);
    ~MainWidget();

private:
    Ui::MainWidget *ui;

    MenuWidget *menuwidget;	//菜单窗口
    AddMaterialsWidget *addmaterialswidget;	//添加材料窗口
    SelectWidget *selectwidget;	//查询窗口
    ModifyWidget *modifywidget;	//修改窗口


    QStackedLayout *stackLayout;
};

#endif // MAINWIDGET_H

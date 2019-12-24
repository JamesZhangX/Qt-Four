#include "mainwidget.h"
#include "ui_mainwidget.h"

MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWidget)
{
    ui->setupUi(this);
    menuwidget = new MenuWidget;
    addmaterialswidget = new AddMaterialsWidget;
    selectwidget = new SelectWidget;
    modifywidget = new ModifyWidget;

    stackLayout = new QStackedLayout;

    stackLayout->addWidget(menuwidget);
    stackLayout->addWidget(addmaterialswidget);
    stackLayout->addWidget(selectwidget);
    stackLayout->addWidget(modifywidget);


    setLayout(stackLayout);
    connect(menuwidget, &MenuWidget::display, stackLayout, &QStackedLayout::setCurrentIndex);
    connect(addmaterialswidget, &AddMaterialsWidget::display, stackLayout, &QStackedLayout::setCurrentIndex);
    connect(selectwidget, &SelectWidget::display, stackLayout, &QStackedLayout::setCurrentIndex);
    connect(modifywidget, &ModifyWidget::display, stackLayout, &QStackedLayout::setCurrentIndex);

}

MainWidget::~MainWidget()
{
    delete ui;
}

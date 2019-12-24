/********************************************************************************
** Form generated from reading UI file 'selectwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTWIDGET_H
#define UI_SELECTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectWidget
{
public:
    QPushButton *returnButton;
    QLineEdit *idlineEdit;
    QLabel *idlabel;
    QLabel *showNamelabel;
    QLabel *showMoneylabel;
    QLabel *showDatelabel;
    QLabel *showNumlabel;
    QPushButton *selectButton;
    QLabel *namelabel;
    QLabel *moneylabel;
    QLabel *numlabel;
    QLabel *datelabel;

    void setupUi(QWidget *SelectWidget)
    {
        if (SelectWidget->objectName().isEmpty())
            SelectWidget->setObjectName(QString::fromUtf8("SelectWidget"));
        SelectWidget->resize(400, 300);
        returnButton = new QPushButton(SelectWidget);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setGeometry(QRect(250, 260, 93, 28));
        idlineEdit = new QLineEdit(SelectWidget);
        idlineEdit->setObjectName(QString::fromUtf8("idlineEdit"));
        idlineEdit->setGeometry(QRect(140, 20, 113, 21));
        idlabel = new QLabel(SelectWidget);
        idlabel->setObjectName(QString::fromUtf8("idlabel"));
        idlabel->setGeometry(QRect(50, 20, 72, 15));
        showNamelabel = new QLabel(SelectWidget);
        showNamelabel->setObjectName(QString::fromUtf8("showNamelabel"));
        showNamelabel->setGeometry(QRect(160, 60, 72, 15));
        showMoneylabel = new QLabel(SelectWidget);
        showMoneylabel->setObjectName(QString::fromUtf8("showMoneylabel"));
        showMoneylabel->setGeometry(QRect(160, 100, 72, 15));
        showDatelabel = new QLabel(SelectWidget);
        showDatelabel->setObjectName(QString::fromUtf8("showDatelabel"));
        showDatelabel->setGeometry(QRect(160, 200, 72, 15));
        showNumlabel = new QLabel(SelectWidget);
        showNumlabel->setObjectName(QString::fromUtf8("showNumlabel"));
        showNumlabel->setGeometry(QRect(160, 150, 72, 15));
        selectButton = new QPushButton(SelectWidget);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(30, 260, 93, 28));
        namelabel = new QLabel(SelectWidget);
        namelabel->setObjectName(QString::fromUtf8("namelabel"));
        namelabel->setGeometry(QRect(50, 60, 72, 15));
        moneylabel = new QLabel(SelectWidget);
        moneylabel->setObjectName(QString::fromUtf8("moneylabel"));
        moneylabel->setGeometry(QRect(50, 100, 72, 15));
        numlabel = new QLabel(SelectWidget);
        numlabel->setObjectName(QString::fromUtf8("numlabel"));
        numlabel->setGeometry(QRect(50, 150, 72, 15));
        datelabel = new QLabel(SelectWidget);
        datelabel->setObjectName(QString::fromUtf8("datelabel"));
        datelabel->setGeometry(QRect(50, 200, 72, 15));

        retranslateUi(SelectWidget);

        QMetaObject::connectSlotsByName(SelectWidget);
    } // setupUi

    void retranslateUi(QWidget *SelectWidget)
    {
        SelectWidget->setWindowTitle(QCoreApplication::translate("SelectWidget", "Form", nullptr));
        returnButton->setText(QCoreApplication::translate("SelectWidget", "\344\270\273\350\217\234\345\215\225", nullptr));
        idlabel->setText(QCoreApplication::translate("SelectWidget", "\344\272\247\345\223\201\345\217\267", nullptr));
        showNamelabel->setText(QCoreApplication::translate("SelectWidget", "NULL", nullptr));
        showMoneylabel->setText(QCoreApplication::translate("SelectWidget", "NULL", nullptr));
        showDatelabel->setText(QCoreApplication::translate("SelectWidget", "NULL", nullptr));
        showNumlabel->setText(QCoreApplication::translate("SelectWidget", "NULL", nullptr));
        selectButton->setText(QCoreApplication::translate("SelectWidget", "\346\237\245\350\257\242", nullptr));
        namelabel->setText(QCoreApplication::translate("SelectWidget", "\345\220\215\347\247\260", nullptr));
        moneylabel->setText(QCoreApplication::translate("SelectWidget", "\345\215\225\344\273\267", nullptr));
        numlabel->setText(QCoreApplication::translate("SelectWidget", "\345\255\230\350\264\247\346\225\260", nullptr));
        datelabel->setText(QCoreApplication::translate("SelectWidget", "\350\264\255\344\271\260\346\227\245\346\234\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectWidget: public Ui_SelectWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTWIDGET_H

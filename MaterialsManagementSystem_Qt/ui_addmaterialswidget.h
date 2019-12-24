/********************************************************************************
** Form generated from reading UI file 'addmaterialswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMATERIALSWIDGET_H
#define UI_ADDMATERIALSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddMaterialsWidget
{
public:
    QPushButton *returnButton;
    QPushButton *addButton;
    QLineEdit *datelineEdit;
    QLineEdit *namelineEdit;
    QLineEdit *moneylineEdit;
    QLineEdit *numlineEdit;
    QLabel *datelabel;
    QLabel *idlabel;
    QLabel *numlabel;
    QLineEdit *idlineEdit;
    QLabel *namelabel;
    QLabel *moneylabel;

    void setupUi(QWidget *AddMaterialsWidget)
    {
        if (AddMaterialsWidget->objectName().isEmpty())
            AddMaterialsWidget->setObjectName(QString::fromUtf8("AddMaterialsWidget"));
        AddMaterialsWidget->resize(400, 300);
        returnButton = new QPushButton(AddMaterialsWidget);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setGeometry(QRect(290, 260, 93, 28));
        addButton = new QPushButton(AddMaterialsWidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(70, 250, 93, 28));
        datelineEdit = new QLineEdit(AddMaterialsWidget);
        datelineEdit->setObjectName(QString::fromUtf8("datelineEdit"));
        datelineEdit->setGeometry(QRect(170, 200, 113, 21));
        namelineEdit = new QLineEdit(AddMaterialsWidget);
        namelineEdit->setObjectName(QString::fromUtf8("namelineEdit"));
        namelineEdit->setGeometry(QRect(170, 20, 113, 21));
        moneylineEdit = new QLineEdit(AddMaterialsWidget);
        moneylineEdit->setObjectName(QString::fromUtf8("moneylineEdit"));
        moneylineEdit->setGeometry(QRect(170, 120, 113, 21));
        numlineEdit = new QLineEdit(AddMaterialsWidget);
        numlineEdit->setObjectName(QString::fromUtf8("numlineEdit"));
        numlineEdit->setGeometry(QRect(170, 160, 113, 21));
        datelabel = new QLabel(AddMaterialsWidget);
        datelabel->setObjectName(QString::fromUtf8("datelabel"));
        datelabel->setGeometry(QRect(80, 210, 72, 15));
        idlabel = new QLabel(AddMaterialsWidget);
        idlabel->setObjectName(QString::fromUtf8("idlabel"));
        idlabel->setGeometry(QRect(80, 70, 72, 15));
        numlabel = new QLabel(AddMaterialsWidget);
        numlabel->setObjectName(QString::fromUtf8("numlabel"));
        numlabel->setGeometry(QRect(80, 160, 72, 15));
        idlineEdit = new QLineEdit(AddMaterialsWidget);
        idlineEdit->setObjectName(QString::fromUtf8("idlineEdit"));
        idlineEdit->setGeometry(QRect(170, 70, 113, 21));
        namelabel = new QLabel(AddMaterialsWidget);
        namelabel->setObjectName(QString::fromUtf8("namelabel"));
        namelabel->setGeometry(QRect(80, 20, 72, 15));
        moneylabel = new QLabel(AddMaterialsWidget);
        moneylabel->setObjectName(QString::fromUtf8("moneylabel"));
        moneylabel->setGeometry(QRect(80, 120, 72, 15));

        retranslateUi(AddMaterialsWidget);

        QMetaObject::connectSlotsByName(AddMaterialsWidget);
    } // setupUi

    void retranslateUi(QWidget *AddMaterialsWidget)
    {
        AddMaterialsWidget->setWindowTitle(QCoreApplication::translate("AddMaterialsWidget", "Form", nullptr));
        returnButton->setText(QCoreApplication::translate("AddMaterialsWidget", "\344\270\273\350\217\234\345\215\225", nullptr));
        addButton->setText(QCoreApplication::translate("AddMaterialsWidget", "\346\267\273\345\212\240", nullptr));
        datelabel->setText(QCoreApplication::translate("AddMaterialsWidget", "\350\264\255\344\271\260\346\227\245\346\234\237", nullptr));
        idlabel->setText(QCoreApplication::translate("AddMaterialsWidget", "\344\272\247\345\223\201\345\217\267", nullptr));
        numlabel->setText(QCoreApplication::translate("AddMaterialsWidget", "\345\255\230\350\264\247\346\225\260", nullptr));
        namelabel->setText(QCoreApplication::translate("AddMaterialsWidget", "\345\220\215\347\247\260", nullptr));
        moneylabel->setText(QCoreApplication::translate("AddMaterialsWidget", "\345\215\225\344\273\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddMaterialsWidget: public Ui_AddMaterialsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMATERIALSWIDGET_H

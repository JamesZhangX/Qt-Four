/********************************************************************************
** Form generated from reading UI file 'modifywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYWIDGET_H
#define UI_MODIFYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModifyWidget
{
public:
    QPushButton *modifyButton;
    QPushButton *returnButton;
    QLabel *namelabel;
    QLabel *moneylabel;
    QLineEdit *namelineEdit;
    QLineEdit *numlineEdit;
    QLabel *idlabel;
    QLabel *numlabel;
    QLabel *datelabel;
    QLineEdit *moneylineEdit;
    QLineEdit *datelineEdit;
    QLineEdit *idlineEdit;

    void setupUi(QWidget *ModifyWidget)
    {
        if (ModifyWidget->objectName().isEmpty())
            ModifyWidget->setObjectName(QString::fromUtf8("ModifyWidget"));
        ModifyWidget->resize(400, 300);
        modifyButton = new QPushButton(ModifyWidget);
        modifyButton->setObjectName(QString::fromUtf8("modifyButton"));
        modifyButton->setGeometry(QRect(40, 260, 93, 28));
        returnButton = new QPushButton(ModifyWidget);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setGeometry(QRect(270, 260, 93, 28));
        namelabel = new QLabel(ModifyWidget);
        namelabel->setObjectName(QString::fromUtf8("namelabel"));
        namelabel->setGeometry(QRect(60, 20, 72, 15));
        moneylabel = new QLabel(ModifyWidget);
        moneylabel->setObjectName(QString::fromUtf8("moneylabel"));
        moneylabel->setGeometry(QRect(60, 120, 72, 15));
        namelineEdit = new QLineEdit(ModifyWidget);
        namelineEdit->setObjectName(QString::fromUtf8("namelineEdit"));
        namelineEdit->setGeometry(QRect(150, 20, 113, 21));
        numlineEdit = new QLineEdit(ModifyWidget);
        numlineEdit->setObjectName(QString::fromUtf8("numlineEdit"));
        numlineEdit->setGeometry(QRect(150, 160, 113, 21));
        idlabel = new QLabel(ModifyWidget);
        idlabel->setObjectName(QString::fromUtf8("idlabel"));
        idlabel->setGeometry(QRect(60, 70, 72, 15));
        numlabel = new QLabel(ModifyWidget);
        numlabel->setObjectName(QString::fromUtf8("numlabel"));
        numlabel->setGeometry(QRect(60, 160, 72, 15));
        datelabel = new QLabel(ModifyWidget);
        datelabel->setObjectName(QString::fromUtf8("datelabel"));
        datelabel->setGeometry(QRect(60, 210, 72, 15));
        moneylineEdit = new QLineEdit(ModifyWidget);
        moneylineEdit->setObjectName(QString::fromUtf8("moneylineEdit"));
        moneylineEdit->setGeometry(QRect(150, 120, 113, 21));
        datelineEdit = new QLineEdit(ModifyWidget);
        datelineEdit->setObjectName(QString::fromUtf8("datelineEdit"));
        datelineEdit->setGeometry(QRect(150, 200, 113, 21));
        idlineEdit = new QLineEdit(ModifyWidget);
        idlineEdit->setObjectName(QString::fromUtf8("idlineEdit"));
        idlineEdit->setGeometry(QRect(150, 70, 113, 21));

        retranslateUi(ModifyWidget);

        QMetaObject::connectSlotsByName(ModifyWidget);
    } // setupUi

    void retranslateUi(QWidget *ModifyWidget)
    {
        ModifyWidget->setWindowTitle(QCoreApplication::translate("ModifyWidget", "Form", nullptr));
        modifyButton->setText(QCoreApplication::translate("ModifyWidget", "\344\277\256\346\224\271", nullptr));
        returnButton->setText(QCoreApplication::translate("ModifyWidget", "\344\270\273\350\217\234\345\215\225", nullptr));
        namelabel->setText(QCoreApplication::translate("ModifyWidget", "\345\220\215\347\247\260", nullptr));
        moneylabel->setText(QCoreApplication::translate("ModifyWidget", "\345\215\225\344\273\267", nullptr));
        idlabel->setText(QCoreApplication::translate("ModifyWidget", "\344\272\247\345\223\201\345\217\267", nullptr));
        numlabel->setText(QCoreApplication::translate("ModifyWidget", "\345\255\230\350\264\247\346\225\260", nullptr));
        datelabel->setText(QCoreApplication::translate("ModifyWidget", "\350\264\255\344\271\260\346\227\245\346\234\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModifyWidget: public Ui_ModifyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYWIDGET_H

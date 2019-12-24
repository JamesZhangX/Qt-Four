/********************************************************************************
** Form generated from reading UI file 'menuwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUWIDGET_H
#define UI_MENUWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuWidget
{
public:
    QPushButton *addButton;
    QPushButton *modifyButton;
    QPushButton *selectButton;
    QPushButton *exitButton;

    void setupUi(QWidget *MenuWidget)
    {
        if (MenuWidget->objectName().isEmpty())
            MenuWidget->setObjectName(QString::fromUtf8("MenuWidget"));
        MenuWidget->resize(400, 300);
        addButton = new QPushButton(MenuWidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(60, 20, 93, 28));
        modifyButton = new QPushButton(MenuWidget);
        modifyButton->setObjectName(QString::fromUtf8("modifyButton"));
        modifyButton->setGeometry(QRect(60, 160, 93, 28));
        selectButton = new QPushButton(MenuWidget);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(60, 90, 93, 28));
        exitButton = new QPushButton(MenuWidget);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(60, 230, 93, 28));

        retranslateUi(MenuWidget);

        QMetaObject::connectSlotsByName(MenuWidget);
    } // setupUi

    void retranslateUi(QWidget *MenuWidget)
    {
        MenuWidget->setWindowTitle(QCoreApplication::translate("MenuWidget", "Form", nullptr));
        addButton->setText(QCoreApplication::translate("MenuWidget", "\346\267\273\345\212\240\347\211\251\350\265\204", nullptr));
        modifyButton->setText(QCoreApplication::translate("MenuWidget", "\344\277\256\346\224\271\347\211\251\350\265\204", nullptr));
        selectButton->setText(QCoreApplication::translate("MenuWidget", "\346\237\245\350\257\242\347\211\251\350\265\204", nullptr));
        exitButton->setText(QCoreApplication::translate("MenuWidget", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuWidget: public Ui_MenuWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUWIDGET_H

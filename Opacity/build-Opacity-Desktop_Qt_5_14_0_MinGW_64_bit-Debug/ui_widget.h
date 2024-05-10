/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *AddButton;
    QPushButton *DownButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        AddButton = new QPushButton(Widget);
        AddButton->setObjectName(QString::fromUtf8("AddButton"));
        AddButton->setGeometry(QRect(220, 180, 181, 23));
        DownButton = new QPushButton(Widget);
        DownButton->setObjectName(QString::fromUtf8("DownButton"));
        DownButton->setGeometry(QRect(220, 250, 181, 23));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        AddButton->setText(QCoreApplication::translate("Widget", "\345\242\236\345\212\240\344\270\215\351\200\217\346\230\216\345\272\246", nullptr));
        DownButton->setText(QCoreApplication::translate("Widget", "\345\207\217\345\260\221\344\270\215\351\200\217\346\230\216\345\272\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

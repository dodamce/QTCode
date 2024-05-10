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
    QPushButton *Yes;
    QPushButton *No;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        Yes = new QPushButton(Widget);
        Yes->setObjectName(QString::fromUtf8("Yes"));
        Yes->setGeometry(QRect(70, 180, 141, 71));
        No = new QPushButton(Widget);
        No->setObjectName(QString::fromUtf8("No"));
        No->setGeometry(QRect(300, 180, 121, 71));
        No->setToolTipDuration(1000);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        Yes->setText(QCoreApplication::translate("Widget", "yes", nullptr));
#if QT_CONFIG(tooltip)
        No->setToolTip(QCoreApplication::translate("Widget", "\346\214\211\351\222\256\344\277\241\346\201\257no", nullptr));
#endif // QT_CONFIG(tooltip)
        No->setText(QCoreApplication::translate("Widget", "no", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

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
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QRadioButton *man;
    QRadioButton *woman;
    QLabel *label;
    QRadioButton *secret;
    QRadioButton *wrong;
    QRadioButton *radioButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        man = new QRadioButton(Widget);
        man->setObjectName(QString::fromUtf8("man"));
        man->setGeometry(QRect(190, 180, 89, 16));
        woman = new QRadioButton(Widget);
        woman->setObjectName(QString::fromUtf8("woman"));
        woman->setGeometry(QRect(190, 210, 89, 16));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 160, 101, 16));
        secret = new QRadioButton(Widget);
        secret->setObjectName(QString::fromUtf8("secret"));
        secret->setGeometry(QRect(190, 240, 89, 16));
        wrong = new QRadioButton(Widget);
        wrong->setObjectName(QString::fromUtf8("wrong"));
        wrong->setGeometry(QRect(190, 270, 89, 16));
        radioButton = new QRadioButton(Widget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(430, 180, 89, 16));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        man->setText(QCoreApplication::translate("Widget", "\347\224\267\346\200\247", nullptr));
        woman->setText(QCoreApplication::translate("Widget", "\345\245\263\346\200\247", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\346\200\247\345\210\253\351\200\211\346\213\251", nullptr));
        secret->setText(QCoreApplication::translate("Widget", "\346\234\252\347\237\245", nullptr));
        wrong->setText(QCoreApplication::translate("Widget", "\351\224\231\350\257\257\357\274\210\346\265\213\350\257\225\357\274\211", nullptr));
        radioButton->setText(QCoreApplication::translate("Widget", "bool", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

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
    QPushButton *pushButton;
    QPushButton *up;
    QPushButton *left;
    QPushButton *right;
    QPushButton *down;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 50, 121, 81));
        up = new QPushButton(Widget);
        up->setObjectName(QString::fromUtf8("up"));
        up->setGeometry(QRect(380, 180, 121, 81));
        left = new QPushButton(Widget);
        left->setObjectName(QString::fromUtf8("left"));
        left->setGeometry(QRect(260, 260, 121, 81));
        right = new QPushButton(Widget);
        right->setObjectName(QString::fromUtf8("right"));
        right->setGeometry(QRect(500, 260, 121, 81));
        down = new QPushButton(Widget);
        down->setObjectName(QString::fromUtf8("down"));
        down->setGeometry(QRect(380, 340, 121, 81));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\346\214\211\351\222\256", nullptr));
        up->setText(QString());
        left->setText(QString());
        right->setText(QString());
        down->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

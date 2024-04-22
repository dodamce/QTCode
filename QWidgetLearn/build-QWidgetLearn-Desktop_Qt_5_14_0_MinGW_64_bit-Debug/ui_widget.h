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
    QPushButton *pushButtonUp;
    QPushButton *pushButtonLeft;
    QPushButton *pushButtonDown;
    QPushButton *pushButtonRight;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(290, 230, 181, 23));
        pushButtonUp = new QPushButton(Widget);
        pushButtonUp->setObjectName(QString::fromUtf8("pushButtonUp"));
        pushButtonUp->setGeometry(QRect(340, 370, 75, 51));
        pushButtonLeft = new QPushButton(Widget);
        pushButtonLeft->setObjectName(QString::fromUtf8("pushButtonLeft"));
        pushButtonLeft->setGeometry(QRect(270, 420, 75, 51));
        pushButtonDown = new QPushButton(Widget);
        pushButtonDown->setObjectName(QString::fromUtf8("pushButtonDown"));
        pushButtonDown->setGeometry(QRect(340, 470, 75, 51));
        pushButtonRight = new QPushButton(Widget);
        pushButtonRight->setObjectName(QString::fromUtf8("pushButtonRight"));
        pushButtonRight->setGeometry(QRect(410, 420, 75, 51));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\346\265\213\350\257\225\346\214\211\351\222\256\346\234\211\346\225\210\346\200\247", nullptr));
        pushButtonUp->setText(QCoreApplication::translate("Widget", "UP", nullptr));
        pushButtonLeft->setText(QCoreApplication::translate("Widget", "left", nullptr));
        pushButtonDown->setText(QCoreApplication::translate("Widget", "down", nullptr));
        pushButtonRight->setText(QCoreApplication::translate("Widget", "right", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

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
    QRadioButton *radio1;
    QRadioButton *radio2;
    QRadioButton *radio3;
    QRadioButton *radio4;
    QRadioButton *radio5;
    QRadioButton *radio6;
    QRadioButton *radio7;
    QRadioButton *radio8;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        radio1 = new QRadioButton(Widget);
        radio1->setObjectName(QString::fromUtf8("radio1"));
        radio1->setGeometry(QRect(90, 130, 89, 16));
        radio2 = new QRadioButton(Widget);
        radio2->setObjectName(QString::fromUtf8("radio2"));
        radio2->setGeometry(QRect(90, 160, 89, 16));
        radio3 = new QRadioButton(Widget);
        radio3->setObjectName(QString::fromUtf8("radio3"));
        radio3->setGeometry(QRect(90, 190, 89, 16));
        radio4 = new QRadioButton(Widget);
        radio4->setObjectName(QString::fromUtf8("radio4"));
        radio4->setGeometry(QRect(280, 130, 89, 20));
        radio5 = new QRadioButton(Widget);
        radio5->setObjectName(QString::fromUtf8("radio5"));
        radio5->setGeometry(QRect(280, 160, 89, 16));
        radio6 = new QRadioButton(Widget);
        radio6->setObjectName(QString::fromUtf8("radio6"));
        radio6->setGeometry(QRect(280, 190, 89, 16));
        radio7 = new QRadioButton(Widget);
        radio7->setObjectName(QString::fromUtf8("radio7"));
        radio7->setGeometry(QRect(430, 130, 89, 20));
        radio8 = new QRadioButton(Widget);
        radio8->setObjectName(QString::fromUtf8("radio8"));
        radio8->setGeometry(QRect(430, 160, 89, 20));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 100, 54, 12));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(280, 100, 54, 12));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(430, 100, 54, 12));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        radio1->setText(QCoreApplication::translate("Widget", "\345\267\250\346\227\240\351\234\270", nullptr));
        radio2->setText(QCoreApplication::translate("Widget", "\351\272\246\350\276\243\351\270\241\350\205\277\345\240\241", nullptr));
        radio3->setText(QCoreApplication::translate("Widget", "\345\217\214\350\204\206\347\211\233\350\202\211\345\240\241", nullptr));
        radio4->setText(QCoreApplication::translate("Widget", "\350\226\257\346\235\241", nullptr));
        radio5->setText(QCoreApplication::translate("Widget", "\351\272\246\350\276\243\351\270\241\347\277\205", nullptr));
        radio6->setText(QCoreApplication::translate("Widget", "\351\270\241\345\235\227", nullptr));
        radio7->setText(QCoreApplication::translate("Widget", "\345\217\257\344\271\220", nullptr));
        radio8->setText(QCoreApplication::translate("Widget", "\351\233\252\347\242\247", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\346\261\211\345\240\241", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\345\260\217\351\243\237", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\351\245\256\346\226\231", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

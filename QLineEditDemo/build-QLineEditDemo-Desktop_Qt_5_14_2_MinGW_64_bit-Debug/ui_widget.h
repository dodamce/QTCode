/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *name;
    QLabel *password;
    QLabel *phone;
    QLineEdit *name_line;
    QLineEdit *password_line;
    QLineEdit *phone_line;
    QLabel *slex;
    QRadioButton *man;
    QRadioButton *woman;
    QPushButton *submet;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(388, 337);
        name = new QLabel(Widget);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(40, 80, 81, 18));
        password = new QLabel(Widget);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(40, 150, 81, 18));
        phone = new QLabel(Widget);
        phone->setObjectName(QString::fromUtf8("phone"));
        phone->setGeometry(QRect(40, 210, 81, 18));
        name_line = new QLineEdit(Widget);
        name_line->setObjectName(QString::fromUtf8("name_line"));
        name_line->setGeometry(QRect(100, 70, 191, 41));
        password_line = new QLineEdit(Widget);
        password_line->setObjectName(QString::fromUtf8("password_line"));
        password_line->setGeometry(QRect(100, 140, 191, 41));
        phone_line = new QLineEdit(Widget);
        phone_line->setObjectName(QString::fromUtf8("phone_line"));
        phone_line->setGeometry(QRect(100, 200, 191, 41));
        slex = new QLabel(Widget);
        slex->setObjectName(QString::fromUtf8("slex"));
        slex->setGeometry(QRect(40, 270, 81, 18));
        man = new QRadioButton(Widget);
        man->setObjectName(QString::fromUtf8("man"));
        man->setGeometry(QRect(100, 270, 61, 22));
        woman = new QRadioButton(Widget);
        woman->setObjectName(QString::fromUtf8("woman"));
        woman->setGeometry(QRect(200, 270, 61, 22));
        submet = new QPushButton(Widget);
        submet->setObjectName(QString::fromUtf8("submet"));
        submet->setGeometry(QRect(120, 300, 112, 34));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        name->setText(QCoreApplication::translate("Widget", "\345\247\223\345\220\215:", nullptr));
        password->setText(QCoreApplication::translate("Widget", "\345\257\206\347\240\201:", nullptr));
        phone->setText(QCoreApplication::translate("Widget", "\347\224\265\350\257\235:", nullptr));
        slex->setText(QCoreApplication::translate("Widget", "\346\200\247\345\210\253:", nullptr));
        man->setText(QCoreApplication::translate("Widget", "\347\224\267", nullptr));
        woman->setText(QCoreApplication::translate("Widget", "\345\245\263", nullptr));
        submet->setText(QCoreApplication::translate("Widget", "\346\217\220\344\272\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

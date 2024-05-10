#include "widget.h"
#include "ui_widget.h"
#include <QLabel>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QLabel* label=new QLabel(this);
    label->setText("文本样式");
    QFont font;
    font.setFamily("仿宋");
    font.setPixelSize(30);
    font.setBold(true);
    font.setItalic(true);
    font.setUnderline(true);
    font.setStrikeOut(true);
    label->setFont(font);
    label->move(10,10);
}

Widget::~Widget()
{
    delete ui;
}


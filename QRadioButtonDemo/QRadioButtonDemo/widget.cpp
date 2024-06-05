#include "widget.h"
#include "ui_widget.h"
#include <QButtonGroup>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //创建分组
    QButtonGroup*one=new QButtonGroup(this);
    QButtonGroup*two=new QButtonGroup(this);
    QButtonGroup*three=new QButtonGroup(this);

    //将单选按钮放到不同组
    one->addButton(ui->radio1);
    one->addButton(ui->radio2);
    one->addButton(ui->radio3);

    two->addButton(ui->radio4);
    two->addButton(ui->radio5);
    two->addButton(ui->radio6);

    three->addButton(ui->radio7);
    three->addButton(ui->radio8);
}

Widget::~Widget()
{
    delete ui;
}


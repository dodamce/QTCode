#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //设置按钮的toolTip
    ui->Yes->setToolTip("按钮说明yes");
    ui->Yes->setToolTipDuration(1000);
}

Widget::~Widget()
{
    delete ui;
}


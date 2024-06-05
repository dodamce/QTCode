#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //修改默认选项
    ui->secret->setChecked(true);
    ui->label->setText("默认未知");
    //错误单选框不被选中，但是可以响应事件的
    ui->wrong->setCheckable(false);
    //设置为不响应任何事件(灰色)
    ui->wrong->setDisabled(true);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_man_clicked()
{
    //修改界面上的label标签
    ui->label->setText("选择男");
}

void Widget::on_woman_clicked()
{
    ui->label->setText("选择女");
}

void Widget::on_secret_clicked()
{
    ui->label->setText("未知");
}

void Widget::on_radioButton_clicked(bool checked)
{
    qDebug()<<"clicked:"<<checked;
}

void Widget::on_radioButton_pressed()
{
    qDebug()<<"pressed";
}

void Widget::on_radioButton_released()
{
    qDebug()<<"release";
}

void Widget::on_radioButton_toggled(bool checked)
{
    qDebug()<<"toggled:"<<checked;
}

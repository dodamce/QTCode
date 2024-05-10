#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_AddButton_clicked()
{
    float opacity=this->windowOpacity();
    if(opacity>=1.0){
        return;
    }
    qDebug()<<"opacity: "<<opacity;
    this->setWindowOpacity(opacity+0.1);
}

void Widget::on_DownButton_clicked()
{
    float opacity=this->windowOpacity();
    if(opacity<=0.0){
        return;
    }
    qDebug()<<"opacity: "<<opacity;
    this->setWindowOpacity(opacity-0.1);
}

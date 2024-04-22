#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>
#include <QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QPushButton*button=new QPushButton(this);
    button->setText("有效性修改按钮");
    connect(button,&QPushButton::clicked,this,&Widget::hander);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::hander()
{
    bool enable=ui->pushButton->isEnabled();
    if(enable==false){
        ui->pushButton->setEnabled(true);
    }else{
        ui->pushButton->setEnabled(false);
    }
}

void Widget::on_pushButtonUp_clicked()
{
    QRect pos=ui->pushButton->geometry();
    qDebug()<<pos;
//    pos.setY(pos.y()-5);
    ui->pushButton->setGeometry(pos.x(),pos.y()-5,pos.width(),pos.height());
}

void Widget::on_pushButtonDown_clicked()
{
    QRect pos=ui->pushButton->geometry();
    qDebug()<<pos;
//    pos.setY(pos.y()+5);
//    ui->pushButton->setGeometry(pos);
      ui->pushButton->setGeometry(pos.x(),pos.y()+5,pos.width(),pos.height());
}

void Widget::on_pushButtonLeft_clicked()
{
    QRect pos=ui->pushButton->geometry();
    qDebug()<<pos;
//    pos.setX(pos.x()-5);
//    ui->pushButton->setGeometry(pos);
    ui->pushButton->setGeometry(pos.x()-5,pos.y(),pos.width(),pos.height());
}

void Widget::on_pushButtonRight_clicked()
{
    QRect pos=ui->pushButton->geometry();
    qDebug()<<pos;
//    pos.setX(pos.x()+5);
//    ui->pushButton->setGeometry(pos);
    ui->pushButton->setGeometry(pos.x()+5,pos.y(),pos.width(),pos.height());
}

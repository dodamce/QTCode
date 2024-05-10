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

//切换窗口样式
void Widget::on_pushButton_clicked()
{
    //获取当前窗口样式
    QString str=this->styleSheet();
    qDebug()<<str;
    if(str!="background-color: black;"){
        //设置窗口样式
        this->setStyleSheet("background-color: black;");
        //设置输入框的样式
        ui->textEdit->setStyleSheet("background-color: black; color:white");
        //设置按钮样式
        ui->pushButton->setStyleSheet("color:white");
    }else{
        //设置窗口样式
        this->setStyleSheet("background-color: rgb(240,240,240);");
        //设置输入框的样式
        ui->textEdit->setStyleSheet("background-color: rgb(240,240,240); color:black");
        //设置按钮样式
        ui->pushButton->setStyleSheet("color:black");
    }
}

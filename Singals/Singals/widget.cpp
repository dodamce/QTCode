#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(this,&Widget::signals1,this,&Widget::myslots1);
    connect(this,&Widget::signals2,this,&Widget::myslots2);
    QPushButton*button=new QPushButton(this);
    button->setText("按钮");
    int* times=new int(1);
    //lambda作为回调函数
    connect(button,&QPushButton::clicked,this,[=](){
        qDebug()<<"lambda回调函数";
        //点击按钮移动按钮
        button->move(10*(*times),10*(*times));
        *times+=1;
    });
    emit signals1();
    emit signals2();

}

Widget::~Widget()
{
    delete ui;
}

void Widget::myslots1()
{
    qDebug()<<"myslot1";
}

void Widget::myslots2()
{
    qDebug()<<"myslot2";
}
void Widget::on_pushButton_clicked()
{
    this->setWindowTitle("修改窗口标题");
}

void Widget::on_pushButton_2_clicked()
{
    //断开原来按钮的槽函数
    disconnect(ui->pushButton,&QPushButton::clicked,this,&Widget::on_pushButton_clicked);
    qDebug()<<"重新绑定槽函数";
    //重新绑定信号槽
    connect(ui->pushButton,&QPushButton::clicked,this,&Widget::handclick);
}

void Widget::handclick()
{
    this->setWindowTitle("重新修改窗口标题");
}

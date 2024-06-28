#include "widget.h"
#include "ui_widget.h"
#include <QTimer>
#include <QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //设置LCDNumber初始值
    ui->lcdNumber->display("10");
    //将QTimer的timeout信号和槽函数绑定
    connect(time,&QTimer::timeout,this,&Widget::handle);
    //启动定时器
    time->start(1000);//触发定时器的时间，单位是ms
}

Widget::~Widget()
{
    delete ui;
}

void Widget::handle()
{
//    qDebug()<<"debug handle";
    //获取到QLCDNumber控件的数字
    int num=ui->lcdNumber->intValue();
    if(num<=0){
        //停止定时器
        time->stop();
        return;
    }
    ui->lcdNumber->display(num-1);
}


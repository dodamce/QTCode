#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    timer=new QTimer(this);
    connect(timer,&QTimer::timeout,this,&Widget::handle);
    timer->start(100);
}

void Widget::handle()
{
    //获取进度条当前值
    int val=ui->progressBar->value();
    if(val>=100){
        timer->stop();
        return;
    }
    val+=1;
    ui->progressBar->setValue(val);
}


Widget::~Widget()
{
    delete ui;
}


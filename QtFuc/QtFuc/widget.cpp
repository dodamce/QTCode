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
//    button->setText("关闭");
//    button->move(200,200);
//    点击关闭信号,this指的Widget，通过Widget来响应这个信号,&QWidget::close是QT内置的槽函数，负责控件关闭
//    connect(button,&QPushButton::clicked,this,&QWidget::close);
    button->setText("按钮");
    button->move(200,200);
    connect(button,&QPushButton::clicked,this,&Widget::handerClick);

    //关联自定义信号
    connect(this,&Widget::mySignals,this,&Widget::handMySignals);
    //初始化时发送自定义信号
    emit mySignals("带参自定义信号");
}

Widget::~Widget()
{
    delete ui;
}

void Widget::handerClick()
{
    //按下按钮，设置窗口标题
    this->setWindowTitle("按钮按下");
    qDebug()<<this->windowTitle();
}

//通过ui界面右击生成的槽函数
void Widget::on_myButton_clicked()
{
    this->setWindowTitle("ui 按钮按下");
}

void Widget::handMySignals(const QString&text)
{
    this->setWindowTitle(text);
}

#include "widget.h"
#include "ui_widget.h"
#include <QLineEdit>
#include <QPushButton>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QLineEdit*edit=new QLineEdit(this);
    edit->setText("Hello World QLineEdit");
    connect(ui->pushButton,&QPushButton::clicked,this,&Widget::handleClick);//连接信号和槽，处理按钮,通过ui->pushButton访问创建的按钮（objectName属性 pushButton唯一）

    button=new QPushButton(this);//button为成员变量
    button->setText("new button");
    connect(button,&QPushButton::clicked,this,&Widget::handleClickCode);
    //修改按钮坐标
    button->move(100,200);

    //主窗口移动位置
    this->move(100,0);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::handleClick()
{
    //当按钮被点击了，按钮文本轮流切换
    if(ui->pushButton->text()=="Hello world 3"){
        ui->pushButton->setText("Hello world push button");
    }else{
        ui->pushButton->setText("Hello world 3");
    }
}

void Widget::handleClickCode()
{
    if(button->text()=="new button"){
        button->setText("new button debug");
    }else{
        button->setText("new button");
    }
}

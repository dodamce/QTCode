#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    srand(time(0));//设置随机数种子
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButtonLeft_clicked()
{
    ui->label->setText("恭喜恭喜！");
}

//鼠标点击消息
void Widget::on_pushButtonRight_clicked()
{
    //获取当前窗口尺寸
    QRect msg = this->geometry();
    int width=msg.width();
    int height=msg.height();

    int x = rand() % width; //设置随机数
    int y = rand() % height;

    ui->pushButtonRight->move(x,y);
}

//鼠标按下消息
void Widget::on_pushButtonRight_pressed()
{
    //获取当前窗口尺寸
    QRect msg = this->geometry();
    int width=msg.width();
    int height=msg.height();

    int x = rand() % width; //设置随机数
    int y = rand() % height;

    ui->pushButtonRight->move(x,y);
}

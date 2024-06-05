#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
//    创建图标对象
//    QIcon icon(":/test.jpg");
    //设置目标  按钮图标
    ui->pushButton->setIcon(QIcon(":/test.jpg"));

    //设置图标尺寸,单位是像素
    ui->pushButton->setIconSize(QSize(50,50));
    ui->up->setIcon(QIcon(":up.png"));
    ui->up->setIconSize(QSize(60,60));
    ui->down->setIcon(QIcon(":down.png"));
    ui->down->setIconSize(QSize(60,60));
    ui->left->setIcon(QIcon(":left.png"));
    ui->left->setIconSize(QSize(60,60));
    ui->right->setIcon(QIcon(":right.png"));
    ui->right->setIconSize(QSize(60,60));

    //设置按钮快捷键
    ui->up->setShortcut(QKeySequence("w"));
    ui->left->setShortcut(QKeySequence("a"));//组合键
//    ui->down->setShortcut(QKeySequence("s"));
//    ui->right->setShortcut(QKeySequence("d"));
    ui->down->setShortcut(QKeySequence(Qt::Key_S));
    ui->right->setShortcut(QKeySequence("d"));
//    ui->right->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_D));//组合快捷键

    //设置按钮连续触发（键盘快捷键默认支持连续触发，鼠标不支持）
    ui->up->setAutoRepeat(true);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_up_clicked()
{
    //获取目标按钮当前位置
    QRect rect=ui->pushButton->geometry();
    //更新按钮位置信息
    ui->pushButton->setGeometry(rect.x(),rect.y()-5,rect.width(),rect.height());
}

void Widget::on_down_clicked()
{
    //获取目标按钮当前位置
    QRect rect=ui->pushButton->geometry();
    //更新按钮位置信息
    ui->pushButton->setGeometry(rect.x(),rect.y()+5,rect.width(),rect.height());
}

void Widget::on_left_clicked()
{
    //获取目标按钮当前位置
    QRect rect=ui->pushButton->geometry();
    //更新按钮位置信息
    ui->pushButton->setGeometry(rect.x()-5,rect.y(),rect.width(),rect.height());
}

void Widget::on_right_clicked()
{
    //获取目标按钮当前位置
    QRect rect=ui->pushButton->geometry();
    //更新按钮位置信息
    ui->pushButton->setGeometry(rect.x()+5,rect.y(),rect.width(),rect.height());
}

#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QCursor cursor(Qt::WaitCursor);//设置按钮为等待图标
    ui->pushButton->setCursor(cursor);
    //设置这个窗口光标为自定义图片
    QPixmap pixmap(":/cursor.png");
    //对图片进行缩放为50×50
    pixmap=pixmap.scaled(50,50);
    //构造光标对象
    QCursor my_cursor(pixmap,10,10);//10,10代表鼠标点击生效位置，图片左上角默认为0，0
    this->setCursor(my_cursor);
}

Widget::~Widget()
{
    delete ui;
}


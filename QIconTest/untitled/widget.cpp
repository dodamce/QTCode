#include "widget.h"
#include "ui_widget.h"
#include <QIcon>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //设置窗口图标
//    QIcon icon("../test.jpg");
//    this->setWindowIcon(icon);
    //通过导入的资源访问
    QIcon icon(":/test.jpg");
    this->setWindowIcon(icon);
}

Widget::~Widget()
{
    delete ui;
}


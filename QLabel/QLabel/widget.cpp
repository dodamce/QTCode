#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QResizeEvent>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
//    ui->label->setTextFormat(Qt::PlainText);
//    ui->label->setText("# <b>纯文本</b>");
//    ui->label_2->setTextFormat(Qt::RichText);
//    ui->label_2->setText("# <b>富文本</b>");
//    ui->label_3->setTextFormat(Qt::MarkdownText);
//    ui->label_3->setText("# Markdown 形式");
    QRect rect=this->geometry();
    ui->label->setGeometry(0,0,rect.width(),rect.height());
    QPixmap pic(":/test.jpg");
    ui->label->setPixmap(pic);
    //启用自动拉伸使图片填充满整个label
    ui->label->setScaledContents(true);
}

Widget::~Widget()
{
    delete ui;
}

//event中包含窗口这一时刻的大小
void Widget::resizeEvent(QResizeEvent *event)
{
    //窗口大小变化时修改label大小
    ui->label->setGeometry(0,0,event->size().width(),event->size().height());
}


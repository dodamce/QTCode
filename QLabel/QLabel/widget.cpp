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
//    QRect rect=this->geometry();
//    ui->label->setGeometry(0,0,rect.width(),rect.height());
//    QPixmap pic(":/test.jpg");
//    ui->label->setPixmap(pic);
//    //启用自动拉伸使图片填充满整个label
//    ui->label->setScaledContents(true);
//    ui->label->setText("这是第一段文本");
//    ui->label->setAlignment(Qt::AlignHCenter|Qt::AlignVCenter);//水平竖直居中
//    ui->label_2->setText("长文本长文本长文本长文本长文本长文本长文本长文本长文本长文本长文本长文本长文本长文本长文本长文本");
//    ui->label_2->setWordWrap(true);//设置自动换行
//    ui->label_3->setText("设置缩进");
//    ui->label_3->setIndent(50);//缩进50像素，上左缩进
//    ui->label_4->setText("设置边距");
//    ui->label_4->setMargin(55);//设置边距（四个方向），文字被覆盖掉一部分
    //设置伙伴关系
    ui->label->setBuddy(ui->radioButton);
    ui->label_2->setBuddy(ui->radioButton_2);
}

Widget::~Widget()
{
    delete ui;
}

//event中包含窗口这一时刻的大小
void Widget::resizeEvent(QResizeEvent *event)
{
    //窗口大小变化时修改label大小
//    ui->label->setGeometry(0,0,event->size().width(),event->size().height());
}


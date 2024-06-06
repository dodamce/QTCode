#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    QString str="兴趣爱好:";
    if(ui->checkBox->isChecked()){
        str+=ui->checkBox->text();
    }
    if(ui->checkBox_2->isChecked()){
        str+=ui->checkBox_2->text();
    }
    if(ui->checkBox_3->isChecked()){
        str+=ui->checkBox_3->text();
    }
    ui->label->setText(str);
}

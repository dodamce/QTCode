#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //姓名框初始化
    ui->name_line->setPlaceholderText("请输入姓名");
    ui->name_line->setClearButtonEnabled(true);//显示清空按钮
    //密码框初始化
    ui->password_line->setPlaceholderText("请输入密码");
    ui->password_line->setClearButtonEnabled(true);
    ui->password_line->setEchoMode(QLineEdit::Password);//设置显示模式为密码
    //电话框初始化
//    ui->phone_line->setPlaceholderText("请输入电话号码");
    ui->phone_line->setInputMask("000-0000-0000");//设置输入格式，只能输入数字，按照3-4-4这种格式输入
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_submet_clicked()
{
    //获取信息
    QString sex="性别:";
    if(ui->man->isChecked()){
        sex+=ui->man->text();
    }else{
        sex+=ui->woman->text();
    }
    qDebug()<<"姓名:"<<ui->name_line->text()<<
              "密码:"<<ui->password_line->text()<<
              "电话:"<<ui->password_line->text()<<
              sex;
}

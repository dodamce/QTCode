#include "widget.h"

#include <QDebug>
#include <QRegExpValidator>

#include "ui_widget.h"
Widget::Widget(QWidget* parent) : QWidget(parent), ui(new Ui::Widget) {
    ui->setupUi(this);
    //姓名框初始化
    ui->name_line->setPlaceholderText("请输入姓名");
    ui->name_line->setClearButtonEnabled(true);  //显示清空按钮
    //密码框初始化
    ui->password_line->setPlaceholderText("请输入密码");
    ui->password_line->setClearButtonEnabled(true);
    ui->password_line->setEchoMode(QLineEdit::Password);  //设置显示模式为密码
    //电话框初始化
    //提交按钮设置为不可选择，当填写完后可以提交
    ui->submet->setEnabled(false);
    //    ui->phone_line->setPlaceholderText("请输入电话号码");
    //    ui->phone_line->setInputMask("000-0000-0000");
    //    //设置输入格式，只能输入数字，按照3-4-4这种格式输入
    //基于正则表达式进行验证
    QRegExp regExp("^1\\d{10}$");  // 1开头,10位数字表示 $表示结尾,设置验证器
    ui->phone_line->setValidator(new QRegExpValidator(regExp));  //注册验证器
}

Widget::~Widget() { delete ui; }

void Widget::on_submet_clicked() {
    //获取信息
    QString sex = "性别:";
    if (ui->man->isChecked()) {
        sex += ui->man->text();
    } else {
        sex += ui->woman->text();
    }
    qDebug() << "姓名:" << ui->name_line->text() << "密码:" << ui->password_line->text()
             << "电话:" << ui->phone_line->text() << sex;
}

void Widget::on_phone_line_textEdited(const QString& text) {
    //传入要验证的字符串非const和输出输出参数，用来查找不匹配的位置,返回QValidate::State对象
    QString str = text;
    int pos = 0;
    if (ui->phone_line->validator()->validate(str, pos) == QValidator::Acceptable) {
        //验证通过，提交按钮设置为可用状态
        ui->submet->setEnabled(true);
    }
}

#include "widget.h"

#include "ui_widget.h"

Widget::Widget(QWidget* parent) : QWidget(parent), ui(new Ui::Widget) {
    ui->setupUi(this);
    ui->lineEdit->setEchoMode(QLineEdit::Password);
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
    ui->label->setText("密码为空");
}

Widget::~Widget() { delete ui; }

void Widget::on_lineEdit_textEdited(const QString& text) {
    const QString& verity = ui->lineEdit_2->text();
    if (text.isEmpty() && verity.isEmpty()) {
        ui->label->setText("密码为空");
    } else if (text == verity) {
        ui->label->setText("密码一致");
    } else {
        ui->label->setText("密码不一致");
    }
}
void Widget::on_lineEdit_2_textEdited(const QString& text) {
    const QString& verity = ui->lineEdit->text();
    if (text.isEmpty() && verity.isEmpty()) {
        ui->label->setText("密码为空");
    } else if (text == verity) {
        ui->label->setText("密码一致");
    } else {
        ui->label->setText("密码不一致");
    }
}

//选中状态切换
void Widget::on_checkBox_toggled(bool checked) {
    if (checked == true) {
        //显示密码
        ui->lineEdit->setEchoMode(QLineEdit::Normal);
    } else {
        ui->lineEdit->setEchoMode(QLineEdit::Password);
    }
}

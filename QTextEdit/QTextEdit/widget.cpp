#include "widget.h"

#include <QDebug>
#include <QTextCursor>

#include "ui_widget.h"

Widget::Widget(QWidget* parent) : QWidget(parent), ui(new Ui::Widget) { ui->setupUi(this); }

Widget::~Widget() { delete ui; }

//文本内容改变触发
void Widget::on_textEdit_textChanged() {
    //获取输入框内容
    const QString& line = ui->textEdit->toPlainText();
    qDebug() << "textChanged:" << line;
}

//选中内容触发
void Widget::on_textEdit_selectionChanged() {
    QTextCursor cursor = ui->textEdit->textCursor();           //当前光标的位置
    qDebug() << "selectionChanged:" << cursor.selectedText();  //打印选中的文本
}

//光标移动触发
void Widget::on_textEdit_cursorPositionChanged() {
    QTextCursor cursor = ui->textEdit->textCursor();
    qDebug() << "cursorPositionChanged:" << cursor.position();
}

void Widget::on_textEdit_undoAvailable(bool b) { qDebug() << "undoAvailable:" << b; }

void Widget::on_textEdit_redoAvailable(bool b) { qDebug() << "redoAvailable:" << b; }

void Widget::on_textEdit_copyAvailable(bool b) { qDebug() << "copyAvailable:" << b; }

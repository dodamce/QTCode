#include "widget.h"
#include "ui_widget.h"
#include <QLabel>
#include "testlabel.h"
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //通过代码构建界面
    //创建label标签
//    QLabel* label=new QLabel(this);//this表示给当前这个对象指定父对象
//    label->setText("Hello World 2");//QString 中存在c字符串转化为QString,这里会隐式类型转化
    TestLabel* test=new TestLabel(this);
    test->setText("Test");
}

Widget::~Widget()
{
    delete ui;
}

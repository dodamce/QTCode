#include "testlabel.h"
#include <iostream>
#include <QDebug>
TestLabel::TestLabel(QWidget*parent):QLabel(parent){}

TestLabel::~TestLabel()
{
//    std::cout<<"DEBUG:中文"<<std::endl;
    qDebug()<<"DEBUG:中文";
}

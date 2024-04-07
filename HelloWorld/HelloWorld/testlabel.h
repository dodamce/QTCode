#ifndef TESTLABEL_H
#define TESTLABEL_H
#include <QLabel>

class TestLabel : public QLabel
{
public:
    //将自定义对象加到对象树上
    TestLabel(QWidget*parent);
    ~TestLabel();
};

#endif // TESTLABEL_H

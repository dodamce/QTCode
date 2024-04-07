#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    void handleClick();
    void handleClickCode();
private:
    Ui::Widget *ui;
    QPushButton* button;//代码生成按钮
};
#endif // WIDGET_H

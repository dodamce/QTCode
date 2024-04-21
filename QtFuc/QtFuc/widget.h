#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    void handerClick();

private slots:
    void on_myButton_clicked();

private:
    Ui::Widget *ui;

//自定义信号,QT扩展的关键字,在qmake扫描带这个关键字后会生成具体代码
signals:
    void mySignals(const QString&);
public:
    void handMySignals(const QString&);
};
#endif // WIDGET_H

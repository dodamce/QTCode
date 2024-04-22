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
signals:
    void signals1();
    void signals2();
public slots:
    void myslots1();
    void myslots2();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void handclick();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H

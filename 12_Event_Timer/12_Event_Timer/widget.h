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

    int timer1; // 定时器1的唯一标志
    int timer2; // 定时器2的唯一标志

    // 重写定时器
    void timerEvent(QTimerEvent *e);

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H

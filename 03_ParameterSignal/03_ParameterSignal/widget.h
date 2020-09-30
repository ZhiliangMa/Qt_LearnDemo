#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QDebug>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    void sendSignalSlot();
    void dealSignalSlot();
    // 槽函数也可以重载。信号带参数，槽函数也要带参。
    void dealSignalSlot(int, QString);

signals:
    /*
     * 信号必须有signals关键字来声明
     * 信号没有返回值，但可以有参数
     * 信号就是函数的声明，只需声明，无需定义
     * 使用：emit mySignal();
     * 信号可以重载
    */
    void mySignal();
    void mySignal(int, QString);

private:
    QPushButton btn1;

};
#endif // WIDGET_H

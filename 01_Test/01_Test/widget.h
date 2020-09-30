#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>// 包含头文件，QWidget窗口类

class Widget : public QWidget// 继承
{
    Q_OBJECT// Q_OBJECT是一个宏，会允许类中使用信号和槽的机制

public:
    Widget(QWidget *parent = nullptr);// 构造函数，初始化列表
    ~Widget();// 析构
};
#endif // WIDGET_H

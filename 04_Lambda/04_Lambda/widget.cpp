#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    btn1.setParent(this);
    btn1.setText("clickHere!");
    btn1.resize(80, 25);
    btn1.move(100, 100);

    resize(320, 240);
    setWindowTitle("Hello");

    // Lambda表达式，匿名函数对象
    // C++11增加的新特性，.pro项目文件： CONFIG += c++11
    // Qt配合信号一起使用，非常方便
    // = ：把外部所有局部变量、类中所有成员以值传递方式传参
    // 因为是值传递，变量为只读，赋值无用。可以加mutable
    // &：把外部所有局部变量，引用符号，容易出错
    // 括号里可以传递参数，参数为信号动作，很少用这个东西
    connect(&btn1, &QPushButton::clicked,
            [=]()
            {
                btn1.setText("Done!");
            });
}

Widget::~Widget()
{
}


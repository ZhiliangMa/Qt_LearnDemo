#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    btn1.setParent(this);
    btn1.setText("sendText");
    btn1.resize(80,25);
    btn1.move(100,100);

    resize(320, 240);
    setWindowTitle("Hello!");

    connect(&btn1, &QPushButton::clicked, this,  &Widget::sendSignalSlot);

    // 普通信号 槽函数也可以重载
    void (Widget::*funSingle)() = &Widget::mySignal;
    void (Widget::*funDealSignalSlot)() = &Widget::dealSignalSlot;
    connect(this, funSingle, this, funDealSignalSlot);
    // 带参数信号 槽函数也可以重载
    void (Widget::*funSinglePara)(int, QString) = &Widget::mySignal;
    void (Widget::*funDealSignalSlotPara)(int, QString) = &Widget::dealSignalSlot;
    connect(this, funSinglePara, this, funDealSignalSlotPara);
}

void Widget::sendSignalSlot()
{
    emit mySignal();
    emit mySignal(100, "发送信号");
}

void Widget::dealSignalSlot()
{
    btn1.setText("Done!");
}

void Widget::dealSignalSlot(int a, QString str)
{
    qDebug() << a << "\t"<< str;// 我的系统环境中，不用转换也可以输出，不过会将""也一并输出
    qDebug() << a << "\t"<< str.toUtf8().data();// 需要加转换，才是正常显示
}

Widget::~Widget()
{
}


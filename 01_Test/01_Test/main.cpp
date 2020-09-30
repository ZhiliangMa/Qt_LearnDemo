#include "widget.h"// 窗口控件基类

#include <QApplication>// 包含一个应用程序类的头文件

// main程序入口
int main(int argc, char *argv[])
{
    // a为应用程序对象，在Qt中，应用程序对象，有且仅有一个
    QApplication a(argc, argv);
    // 窗口对象
    Widget w;
    // 窗口对象要调用show方法，来显示窗口
    w.show();
    // 让应用程序对象进入消息循环
    // 让代码阻塞到这行
    return a.exec();
}

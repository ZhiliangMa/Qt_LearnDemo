#include "widget.h"
#include <QPushButton>

// 命名规范
// 类名:首字母大写，单词和单词之间首字母大写
// 函数名、变量名称：首字母小写，单词和单词之间首字母大写

// 快捷键
// 注释：ctrl + /
// 运行：ctrl + r
// 编译：ctrl + b
// 字体缩放：ctrl + 鼠标滚轮
// 查找：ctrl + f
// 整行移动：ctrl + shift + ↑ 或者↓
// 帮助文档：F1，两次F1会全屏，ESC返回编辑界面
// 自动对齐：ctrl + i
// 同名之间的 .h 和 .cpp切换：F4

// 帮助文档：第一种方式 F1；第二种 左侧按钮；第三种 D:\Qt\Qt5.12.9\5.12.9\mingw73_64\bin\assistant.exe
// 推荐第三种

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    // 创建一个按钮，让btn对象依赖在 w对象上
    QPushButton *btn = new QPushButton(this);
    // 移动位置
    btn->move(100, 100);
    // 显示文本
    btn->setText("123");
    // 重新指定按钮大小
    btn->resize(100, 100);
    // show，以顶层方式弹出窗口控件
    btn->show();

    // 重置窗口大小
    resize(320, 240);
    // 设置固定窗口大小，不可缩放
    setFixedSize(320, 240);
    // 设置窗口标题
    setWindowTitle("Hello!");

    // 需求：点击上面创建的按钮，关闭窗口
    // 参数1，信号的发送者；参数2，发送的信号（函数的地址）；参数3，信号的接受者；参数4，处理的槽函数；
    connect( btn, &QPushButton::clicked, this, &QWidget::close );

    /*// 为什么它不显示？？？
    QPushButton btn2;
    w. btn2.move(50,100);
    btn2.setText("123");
    btn2.resize(100,50);
    btn2.show();*/

}

Widget::~Widget()
{
}


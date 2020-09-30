#include "mainwidget.h"

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
{
    btn1.setParent(this);
    btn1.setText("close");
    btn1.resize(50, 50);
    btn1.move(100,100);

    btn2 = new QPushButton;
    btn2->setParent(this);
    btn2->setText("abc");
    btn2->resize(50, 50);
    btn2->move(0, 100);

    btn3.setParent(this);
    btn3.setText("切换窗口");
    btn3.resize(80, 50);
    btn3.move(100, 0);

    resize(320, 240);
    setWindowTitle("01");

    connect( &btn1, &QPushButton::clicked, this, &MainWidget::close );
    /*
     * &b1：信号发出者，指针类型
     * &QPushButton::clicked：处理的信号。  &发送者的信号::信号名称
     * this：信号接收者
     * &QWidget::close：槽函数，信号处理函数
    */

    /*
     * 自定义槽（基本等于普通函数的用法）
     * Qt5的槽函数可以是：任意的成员函数，普通全局函数，静态函数
     * 槽函数需要和信号一致（参数，返回值）
     * 由于信号都是没有返回值，所以，槽函数一定没有返回值
    */
    connect( btn2, &QPushButton::clicked, this, &MainWidget::mySlot );
    connect( btn2, &QPushButton::clicked, &btn1, &QPushButton::hide );// 隐藏

    // 点击01窗口的"切换窗口"，会显示02窗口，并将01隐藏
    connect( &btn3, &QPushButton::clicked, this, &MainWidget::changeWin );

    // 点击02窗口的"切换窗口"，会显示01窗口，并将02隐藏
    connect( &w2, &SubWidget::mySignal, this, &MainWidget::dealSub );

    // 因为main里已经有show了，这里可以不写show。
}

void MainWidget::mySlot()
{
    btn2->setText("Hello!");
}

void MainWidget::changeWin()
{
    // 本窗口隐藏
    this->hide();
    // 子窗口显示
    w2.show();
}

void MainWidget::dealSub()
{
    // 子窗口隐藏
    w2.hide();
    // 本窗口显示
    this->show();
}

MainWidget::~MainWidget()
{
}


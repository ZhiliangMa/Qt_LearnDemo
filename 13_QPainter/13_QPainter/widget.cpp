#include "widget.h"
#include "ui_widget.h"
#include <QPainter>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

// 绘图事件
void Widget::paintEvent(QPaintEvent *)
{
    // 实例化画家对象，this指定绘图设备，当前窗口
    QPainter painter(this);

    // 设置画笔颜色，默认为黑色
    QPen pen(QColor(255,0,0));
    // 设置画笔线宽（只对点线圆起作用，对文字不起作用），默认为1
    pen.setWidth(3);
    // 设置画笔线条风格，默认是SolidLine实线
    // DashLine虚线，DotLine点线，DashDotLine、DashDotDotLine点划线
    pen.setStyle(Qt::DashDotLine);
    // 让画家使用这个画笔
    painter.setPen(pen);

    // 画刷，对封闭图形填充色
    QBrush brush(Qt::blue);
    // 设置画刷风格，默认是SolidPattern实心填充
    brush.setStyle(Qt::Dense5Pattern);
    // 让画家使用画刷
    painter.setBrush(brush);

    // 画一条线
    painter.drawLine(QPoint(0,0), QPoint(100,100));

    // 画圆
    painter.drawEllipse(QPoint(100,100), 100, 100);
    painter.drawEllipse(QPoint(100,100), 50, 30);

    // 画矩形 （左上角x坐标，左上角y坐标，宽度，高度）
    painter.drawRect(QRect(200,20,100,100));
    // 画矩形 （左上角x坐标，左上角y坐标）（宽度，高度）
    painter.drawRect(QRect(QPoint(200,20),QSize(100,100)));

    // 这种方式会多出一个点，不方便使用
    // 画矩形 （左上角x坐标，左上角y坐标）（右下角x坐标，右下角y坐标）
    painter.drawRect(QRect(QPoint(200,120),QPoint(300,220)));

    // 画点
    painter.drawPoint(300,223);

    // 画文字
    painter.drawText(QRect(20,200,50,50), "好好学习，天天向上");
}

Widget::~Widget()
{
    delete ui;
}


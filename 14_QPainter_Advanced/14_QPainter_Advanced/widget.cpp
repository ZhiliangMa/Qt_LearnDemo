#include "widget.h"
#include "ui_widget.h"
#include <QPainter>
#include <QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->btnMove, &QPushButton::clicked, [=](){
        posX+=100;
        // 重新绘图，手动调用QPainter绘图事件，将整个窗口重新绘制
        update();
    });
}

void Widget::paintEvent(QPaintEvent *)
{
    QPainter painter(this);

    /////////////////// 抗锯齿测试 ///////////////////
    painter.drawEllipse(QPoint(100,50), 50, 50);

    // 设置 抗锯齿能力，抗锯齿会让绘图效率较低
    painter.setRenderHint(QPainter::Antialiasing);
    painter.drawEllipse(QPoint(200,50), 50, 50);

    // 设置 抗锯齿能力，抗锯齿会让绘图效率较低
    painter.setRenderHint(QPainter::HighQualityAntialiasing);
    painter.drawEllipse(QPoint(300,50), 50, 50);


    /////////////////// 平移坐标系测试 ///////////////////
    painter.drawRect(QRect(20,120, 50, 50));

    // 用给定的偏移量平移坐标系
    painter.translate(100, 0);
    // 保存painter状态
    painter.save();

    painter.drawRect(QRect(20,120, 50, 50));

    // 还原坐标状态
    painter.restore();
    painter.drawRect(QRect(20,150, 50, 50));

    // 如果图片左侧超出屏幕，从0开始重新移动
    if(posX > this->width())
    {
        posX = 0;
    }
    /////////////////// QPainter画图片 ///////////////////
    painter.drawPixmap(posX,200, QPixmap(":/pic/123.png"));
}

Widget::~Widget()
{
    delete ui;
}


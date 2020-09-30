#include "widget.h"
#include "ui_widget.h"
#include <QTimer>
//#include <QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 启动定时器
    // 参数1：定时间隔，单位ms。
    timer1 = startTimer(1000);
    timer2 = startTimer(2000);

    // 定时器第二种使用方法
    QTimer *timer3 = new QTimer;
    // 启动定时器
    timer3->start(500);

    connect(timer3, &QTimer::timeout, [=](){
        static int num3 = 1;
        ui->label_3->setText(QString::number(num3++));
    });

    connect(ui->btnPause, &QPushButton::clicked, [=](){
        if(ui->btnPause->text() == "暂停")
        {
            ui->btnPause->setText("继续");
            timer3->stop();
        }
        else
        {
            ui->btnPause->setText("暂停");
            timer3->start();
        }
    });

}

void Widget::timerEvent(QTimerEvent *e)
{
    // Label1 timer1，每隔1s加1
    if(e->timerId() == timer1)
    {
        static int num1 = 1;
        ui->label->setText(QString::number(num1++));
    }

    // Label_2 timer2，每隔2s加1
    if(e->timerId() == timer2)
    {
        static int num2 = 1;
        ui->label_2->setText(QString::number(num2++));
    }
}

Widget::~Widget()
{
    delete ui;
}


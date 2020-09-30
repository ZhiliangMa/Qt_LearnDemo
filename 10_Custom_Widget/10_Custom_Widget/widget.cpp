#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 调试输出滑块值
    connect(ui->btn_get, &QPushButton::clicked, [=](){
        qDebug() << ui->widget->getNum() << ui->widget_2->getNum();
    });

    // 设置滑块值为一半
    connect(ui->btn_set, &QPushButton::clicked, [=](){
        ui->widget->setNum(50);
        ui->widget_2->setNum(50);
    });
}

Widget::~Widget()
{
    delete ui;
}


#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 设置单选钮，默认选中男
    ui->rBtnMan->setChecked(true);
    // 选中女后，调试打印消息
    connect(ui->rBtnWoman, &QRadioButton::clicked, [=](){
        qDebug() << "单选钮选中女";
    });

    connect(ui->cBox_1, &QCheckBox::stateChanged, [=](int state){
        qDebug() << state;
    });
}

Widget::~Widget()
{
    delete ui;
}


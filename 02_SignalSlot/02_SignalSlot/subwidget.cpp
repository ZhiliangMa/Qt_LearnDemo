#include "subwidget.h"

SubWidget::SubWidget(QWidget *parent) : QWidget(parent)
{
    btn1.setParent(this);
    btn1.setText("切换窗口");
    btn1.resize(80, 50);
    btn1.move(20, 20);

    setWindowTitle("02");
    resize(200, 200);
    // 没有show，由MainWidget中的按钮触发

    connect( &btn1, &QPushButton::clicked, this,  &SubWidget::sendSlot);

    //直接这样写也是可以的，程序同样可以正常运行，emit本来就是一个空的宏定义，# define emit
    //connect( &btn1, &QPushButton::clicked, this,  &SubWidget::mySignal);
}

void SubWidget::sendSlot()
{
    emit mySignal();
}

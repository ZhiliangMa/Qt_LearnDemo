#include "mylabel.h"
#include <QDebug>
#include <QMouseEvent>

myLabel::myLabel(QWidget *parent) : QLabel(parent)
{
    // 设置鼠标追踪，移动事件不再用点击鼠标左键了
    setMouseTracking(true);
}

// 鼠标进入事件
void myLabel::enterEvent(QEvent *event)
{
    qDebug() << "鼠标进入了";
}

// 鼠标离开事件
void myLabel::leaveEvent(QEvent *event)
{
    qDebug() << "鼠标离开了";
}

// 鼠标的按下事件
void myLabel::mousePressEvent(QMouseEvent *ev)
{
    // 当鼠标左键按下时，才提示消息
    if(ev->button() == Qt::LeftButton)
    {
        // 调试输出相对于Label控件的坐标
        QString str = QString("鼠标按下了  x=%1  y=%2").arg(ev->x()).arg(ev->y());
        qDebug() << str;

        // 调试输出相对于整个屏幕的坐标
        str = QString("鼠标按下了  x=%1  y=%2").arg(ev->globalX()).arg(ev->globalY());
        qDebug() << str;
    }

}

// 鼠标的释放事件
void myLabel::mouseReleaseEvent(QMouseEvent *ev)
{
    qDebug() << "鼠标释放了";
}

// 鼠标的移动事件
void myLabel::mouseMoveEvent(QMouseEvent *ev)
{
    //if(ev->buttons() & Qt::LeftButton)
    //{
        QString str = QString("鼠标移动了  x=%1  y=%2").arg(ev->x()).arg(ev->y());
        qDebug() << str;
    //}
}


#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <QPushButton>
#include "subwidget.h"

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    MainWidget(QWidget *parent = nullptr);
    ~MainWidget();

    void mySlot();
    void changeWin();
    void dealSub();

private:
    QPushButton btn1;
    QPushButton *btn2;
    QPushButton btn3;

    SubWidget w2;
};
#endif // MAINWIDGET_H

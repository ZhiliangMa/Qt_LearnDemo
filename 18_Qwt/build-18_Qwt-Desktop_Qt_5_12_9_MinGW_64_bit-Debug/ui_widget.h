/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>
#include "qwt_analog_clock.h"
#include "qwt_dial.h"
#include "qwt_slider.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QwtAnalogClock *AnalogClock;
    QwtSlider *Slider;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(480, 320);
        AnalogClock = new QwtAnalogClock(Widget);
        AnalogClock->setObjectName(QString::fromUtf8("AnalogClock"));
        AnalogClock->setGeometry(QRect(30, 40, 200, 200));
        AnalogClock->setLineWidth(4);
        Slider = new QwtSlider(Widget);
        Slider->setObjectName(QString::fromUtf8("Slider"));
        Slider->setGeometry(QRect(310, 30, 60, 250));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "mycombobox.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_2;
    QPushButton *btnClearRec;
    QPushButton *btnClearSend;
    QPlainTextEdit *txtRec;
    QPushButton *btnSend;
    QWidget *widget_1;
    QVBoxLayout *verticalLayout;
    QLabel *lblSerialPort;
    myComboBox *cmbSerialPort;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QLabel *lblBaudRate;
    QComboBox *cmbBaudRate;
    QLabel *lblStop;
    QComboBox *cmbStop;
    QLabel *lblData;
    QComboBox *cmbData;
    QLabel *lblCheck;
    QComboBox *cmbCheck;
    QLabel *lblSwitch;
    QPushButton *btnSwitch;
    QPlainTextEdit *txtSend;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 480);
        gridLayout_2 = new QGridLayout(Widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        btnClearRec = new QPushButton(Widget);
        btnClearRec->setObjectName(QString::fromUtf8("btnClearRec"));

        gridLayout_2->addWidget(btnClearRec, 2, 1, 1, 1);

        btnClearSend = new QPushButton(Widget);
        btnClearSend->setObjectName(QString::fromUtf8("btnClearSend"));

        gridLayout_2->addWidget(btnClearSend, 4, 2, 1, 1);

        txtRec = new QPlainTextEdit(Widget);
        txtRec->setObjectName(QString::fromUtf8("txtRec"));
        txtRec->setReadOnly(true);

        gridLayout_2->addWidget(txtRec, 0, 0, 3, 1);

        btnSend = new QPushButton(Widget);
        btnSend->setObjectName(QString::fromUtf8("btnSend"));

        gridLayout_2->addWidget(btnSend, 3, 2, 1, 1);

        widget_1 = new QWidget(Widget);
        widget_1->setObjectName(QString::fromUtf8("widget_1"));
        verticalLayout = new QVBoxLayout(widget_1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lblSerialPort = new QLabel(widget_1);
        lblSerialPort->setObjectName(QString::fromUtf8("lblSerialPort"));

        verticalLayout->addWidget(lblSerialPort);

        cmbSerialPort = new myComboBox(widget_1);
        cmbSerialPort->setObjectName(QString::fromUtf8("cmbSerialPort"));

        verticalLayout->addWidget(cmbSerialPort);

        widget_2 = new QWidget(widget_1);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lblBaudRate = new QLabel(widget_2);
        lblBaudRate->setObjectName(QString::fromUtf8("lblBaudRate"));

        gridLayout->addWidget(lblBaudRate, 0, 0, 1, 1);

        cmbBaudRate = new QComboBox(widget_2);
        cmbBaudRate->addItem(QString());
        cmbBaudRate->addItem(QString());
        cmbBaudRate->addItem(QString());
        cmbBaudRate->setObjectName(QString::fromUtf8("cmbBaudRate"));

        gridLayout->addWidget(cmbBaudRate, 0, 1, 1, 1);

        lblStop = new QLabel(widget_2);
        lblStop->setObjectName(QString::fromUtf8("lblStop"));

        gridLayout->addWidget(lblStop, 1, 0, 1, 1);

        cmbStop = new QComboBox(widget_2);
        cmbStop->addItem(QString());
        cmbStop->addItem(QString());
        cmbStop->addItem(QString());
        cmbStop->setObjectName(QString::fromUtf8("cmbStop"));

        gridLayout->addWidget(cmbStop, 1, 1, 1, 1);

        lblData = new QLabel(widget_2);
        lblData->setObjectName(QString::fromUtf8("lblData"));

        gridLayout->addWidget(lblData, 2, 0, 1, 1);

        cmbData = new QComboBox(widget_2);
        cmbData->addItem(QString());
        cmbData->addItem(QString());
        cmbData->addItem(QString());
        cmbData->addItem(QString());
        cmbData->setObjectName(QString::fromUtf8("cmbData"));

        gridLayout->addWidget(cmbData, 2, 1, 1, 1);

        lblCheck = new QLabel(widget_2);
        lblCheck->setObjectName(QString::fromUtf8("lblCheck"));

        gridLayout->addWidget(lblCheck, 3, 0, 1, 1);

        cmbCheck = new QComboBox(widget_2);
        cmbCheck->addItem(QString());
        cmbCheck->addItem(QString());
        cmbCheck->addItem(QString());
        cmbCheck->setObjectName(QString::fromUtf8("cmbCheck"));

        gridLayout->addWidget(cmbCheck, 3, 1, 1, 1);

        lblSwitch = new QLabel(widget_2);
        lblSwitch->setObjectName(QString::fromUtf8("lblSwitch"));

        gridLayout->addWidget(lblSwitch, 4, 0, 1, 1);

        btnSwitch = new QPushButton(widget_2);
        btnSwitch->setObjectName(QString::fromUtf8("btnSwitch"));

        gridLayout->addWidget(btnSwitch, 4, 1, 1, 1);


        verticalLayout->addWidget(widget_2);


        gridLayout_2->addWidget(widget_1, 0, 1, 1, 2);

        txtSend = new QPlainTextEdit(Widget);
        txtSend->setObjectName(QString::fromUtf8("txtSend"));

        gridLayout_2->addWidget(txtSend, 3, 0, 2, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 1, 1, 1);


        retranslateUi(Widget);

        cmbBaudRate->setCurrentIndex(2);
        cmbData->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        btnClearRec->setText(QApplication::translate("Widget", "\346\270\205\347\251\272\346\216\245\346\224\266", nullptr));
        btnClearSend->setText(QApplication::translate("Widget", "\346\270\205\347\251\272\345\217\221\351\200\201", nullptr));
        btnSend->setText(QApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
        lblSerialPort->setText(QApplication::translate("Widget", "\344\270\262\345\217\243\351\200\211\346\213\251", nullptr));
        lblBaudRate->setText(QApplication::translate("Widget", "\346\263\242\347\211\271\347\216\207", nullptr));
        cmbBaudRate->setItemText(0, QApplication::translate("Widget", "9600", nullptr));
        cmbBaudRate->setItemText(1, QApplication::translate("Widget", "38400", nullptr));
        cmbBaudRate->setItemText(2, QApplication::translate("Widget", "115200", nullptr));

        lblStop->setText(QApplication::translate("Widget", "\345\201\234\346\255\242\344\275\215", nullptr));
        cmbStop->setItemText(0, QApplication::translate("Widget", "1", nullptr));
        cmbStop->setItemText(1, QApplication::translate("Widget", "1.5", nullptr));
        cmbStop->setItemText(2, QApplication::translate("Widget", "2", nullptr));

        lblData->setText(QApplication::translate("Widget", "\346\225\260\346\215\256\344\275\215", nullptr));
        cmbData->setItemText(0, QApplication::translate("Widget", "5", nullptr));
        cmbData->setItemText(1, QApplication::translate("Widget", "6", nullptr));
        cmbData->setItemText(2, QApplication::translate("Widget", "7", nullptr));
        cmbData->setItemText(3, QApplication::translate("Widget", "8", nullptr));

        lblCheck->setText(QApplication::translate("Widget", "\345\245\207\345\201\266\346\240\241\351\252\214", nullptr));
        cmbCheck->setItemText(0, QApplication::translate("Widget", "\346\227\240", nullptr));
        cmbCheck->setItemText(1, QApplication::translate("Widget", "\345\245\207\346\240\241\351\252\214", nullptr));
        cmbCheck->setItemText(2, QApplication::translate("Widget", "\345\201\266\346\240\241\351\252\214", nullptr));

        lblSwitch->setText(QApplication::translate("Widget", "\344\270\262\345\217\243\346\223\215\344\275\234", nullptr));
        btnSwitch->setText(QApplication::translate("Widget", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

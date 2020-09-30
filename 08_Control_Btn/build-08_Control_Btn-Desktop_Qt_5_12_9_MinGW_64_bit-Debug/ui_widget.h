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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButton;
    QToolButton *toolButton;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *rBtnMan;
    QRadioButton *rBtnWoman;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *cBox_1;
    QCheckBox *cBox_2;
    QCheckBox *cBox_3;
    QCheckBox *cBox_4;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 20, 111, 41));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pic/123.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(32, 32));
        toolButton = new QToolButton(Widget);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(20, 80, 111, 41));
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(32, 32));
        toolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton->setAutoRaise(false);
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 150, 109, 70));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        rBtnMan = new QRadioButton(groupBox);
        rBtnMan->setObjectName(QString::fromUtf8("rBtnMan"));

        verticalLayout->addWidget(rBtnMan);

        rBtnWoman = new QRadioButton(groupBox);
        rBtnWoman->setObjectName(QString::fromUtf8("rBtnWoman"));

        verticalLayout->addWidget(rBtnWoman);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(150, 150, 109, 70));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        radioButton_3 = new QRadioButton(groupBox_2);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        verticalLayout_2->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(groupBox_2);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        verticalLayout_2->addWidget(radioButton_4);

        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 250, 141, 114));
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        cBox_1 = new QCheckBox(groupBox_3);
        cBox_1->setObjectName(QString::fromUtf8("cBox_1"));

        verticalLayout_3->addWidget(cBox_1);

        cBox_2 = new QCheckBox(groupBox_3);
        cBox_2->setObjectName(QString::fromUtf8("cBox_2"));

        verticalLayout_3->addWidget(cBox_2);

        cBox_3 = new QCheckBox(groupBox_3);
        cBox_3->setObjectName(QString::fromUtf8("cBox_3"));

        verticalLayout_3->addWidget(cBox_3);

        cBox_4 = new QCheckBox(groupBox_3);
        cBox_4->setObjectName(QString::fromUtf8("cBox_4"));

        verticalLayout_3->addWidget(cBox_4);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        pushButton->setText(QApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
        toolButton->setText(QApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
        groupBox->setTitle(QApplication::translate("Widget", "\346\200\247\345\210\253", nullptr));
        rBtnMan->setText(QApplication::translate("Widget", "\347\224\267", nullptr));
        rBtnWoman->setText(QApplication::translate("Widget", "\345\245\263", nullptr));
        groupBox_2->setTitle(QApplication::translate("Widget", "\345\251\232\345\220\246", nullptr));
        radioButton_3->setText(QApplication::translate("Widget", "\345\267\262\345\251\232", nullptr));
        radioButton_4->setText(QApplication::translate("Widget", "\346\234\252\345\251\232", nullptr));
        groupBox_3->setTitle(QApplication::translate("Widget", "\351\227\256\345\215\267\350\260\203\346\237\245", nullptr));
        cBox_1->setText(QApplication::translate("Widget", "\350\217\234\345\223\201\351\234\200\350\246\201\345\206\215\345\256\214\345\226\204", nullptr));
        cBox_2->setText(QApplication::translate("Widget", "\346\234\215\345\212\241\350\277\230\351\234\200\346\233\264\345\212\240\345\221\250\345\210\260", nullptr));
        cBox_3->setText(QApplication::translate("Widget", "\351\244\220\345\216\205\345\270\203\345\261\200\344\270\215\345\245\275", nullptr));
        cBox_4->setText(QApplication::translate("Widget", "\344\270\212\346\241\214\346\227\266\351\227\264\345\244\252\346\205\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

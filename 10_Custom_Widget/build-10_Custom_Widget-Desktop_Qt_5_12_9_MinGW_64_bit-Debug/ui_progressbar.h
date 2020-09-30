/********************************************************************************
** Form generated from reading UI file 'progressbar.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRESSBAR_H
#define UI_PROGRESSBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProgressBar
{
public:
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinBox;
    QSlider *horizontalSlider;

    void setupUi(QWidget *ProgressBar)
    {
        if (ProgressBar->objectName().isEmpty())
            ProgressBar->setObjectName(QString::fromUtf8("ProgressBar"));
        ProgressBar->resize(260, 40);
        horizontalLayout = new QHBoxLayout(ProgressBar);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        spinBox = new QSpinBox(ProgressBar);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        horizontalLayout->addWidget(spinBox);

        horizontalSlider = new QSlider(ProgressBar);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider);


        retranslateUi(ProgressBar);

        QMetaObject::connectSlotsByName(ProgressBar);
    } // setupUi

    void retranslateUi(QWidget *ProgressBar)
    {
        ProgressBar->setWindowTitle(QApplication::translate("ProgressBar", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProgressBar: public Ui_ProgressBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRESSBAR_H

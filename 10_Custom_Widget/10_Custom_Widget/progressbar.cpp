#include "progressbar.h"
#include "ui_progressbar.h"

ProgressBar::ProgressBar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ProgressBar)
{
    ui->setupUi(this);

    // 将整型微调 和 水平滑块用代码关联
    // 整型微调 同步 水平滑块
    void(QSpinBox:: * spSignal)(int) = &QSpinBox::valueChanged;
    connect(ui->spinBox, spSignal, ui->horizontalSlider, &QSlider::setValue);
    // 水平滑块 同步 整型微调
    connect(ui->horizontalSlider, &QSlider::valueChanged, ui->spinBox, &QSpinBox::setValue);
}

// 外部设置自定义控件-滑块数字的接口
void ProgressBar::setNum(int num)
{
    ui->spinBox->setValue(num);
}

// 外部获取自定义控件-滑块数字的接口
int ProgressBar::getNum(void)
{
    return ui->spinBox->value();
}

ProgressBar::~ProgressBar()
{
    delete ui;
}

#ifndef PROGRESSBAR_H
#define PROGRESSBAR_H

#include <QWidget>

namespace Ui {
class ProgressBar;
}

class ProgressBar : public QWidget
{
    Q_OBJECT

public:
    explicit ProgressBar(QWidget *parent = nullptr);
    ~ProgressBar();

    // 外部设置自定义控件-滑块数字的接口
    void setNum(int num);
    // 外部获取自定义控件-滑块数字的接口
    int getNum(void);

private:
    Ui::ProgressBar *ui;
};

#endif // PROGRESSBAR_H

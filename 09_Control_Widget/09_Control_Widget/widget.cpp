#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 利用listWidget列表框 写诗
    QListWidgetItem * item = new QListWidgetItem("锄禾日当午");
    // 用添加项目的方式，将一行诗放入到listWidget控件中
    ui->listWidget->addItem(item);
    // 设置字体居中
    item->setTextAlignment(Qt::AlignHCenter);

    // 第二种方式，可以将元素一次性添加

    // QStringList    QList<String>
    QStringList list;
    list << "锄禾日当午" << "汗滴禾下土" << "谁知盘中餐" << "粒粒皆辛苦";
    ui->listWidget->addItems(list);

}

Widget::~Widget()
{
    delete ui;
}


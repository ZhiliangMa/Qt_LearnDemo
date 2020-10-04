#include "widget.h"
#include "ui_widget.h"
#include <QFileDialog>
#include <QDebug>
#include <QTextCodec>
#include <QDateTime>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 点击选取文件按钮，弹出文件对话框
    connect(ui->pushButton, &QPushButton::clicked, [=](){

        // 用打开的方式打开一个文件对话框
        // 打印选中该的路径名称。参数：父对象，对话框标题，默认打开路径，过滤的文件格式
        QString path = QFileDialog::getOpenFileName(this, "open",
                                                    "../",
                    "Text(*.txt);;souce(*.cpp *.h);;all(*.*)");
        // 调试输出选择路径
        qDebug() << path;
        // 将路径显示到 lineEdit
        ui->lineEdit->setText(path);

        // 指定操作文件格式，只能指定一种格式，所以指定gbk时读utf-8的会出错
        //QTextCodec * codec = QTextCodec::codecForName("gbk");

        // 读取txt内容，放入到 textEdit中
        // QFile默认支持的格式是 utf-8
        // 输入打开文件的文件路径
        QFile file(path);
        // 打开方式：只读/只写/读写/追加
        file.open(QIODevice::ReadOnly);

        // 全部读取
        //QByteArray array = file.readAll();
        // 按行读，追加到array，直到读到行尾
        QByteArray array;
        while(!file.atEnd())
        {
            array += file.readLine();
        }

        ui->textEdit->setText(array);
        //ui->textEdit->setText(codec->toUnicode(array));

        // 关闭文件对象
        file.close();

        // 用追加方式进行写文件
        /*file.open(QIODevice::Append);
        file.write("aaaaaaaaa");
        // 关闭文件对象
        file.close();*/

        // QFileInfo 文件信息类
        QFileInfo info(path);
        qDebug() << "大小：" << info.size() << "Bytes 后缀名：" << info.suffix()
                 << " 文件名称：" << info.fileName() << " 文件路径：" << info.filePath();
        // 显示 创建日期
        qDebug() << "创建日期：" << info.created().toString("yyyy/MM/dd hh:mm:ss");
        qDebug() << "创建日期：" << info.birthTime().toString("yyyy/MM/dd hh:mm:ss");
        // 显示 最后修改日期
        qDebug() << "最后修改日期：" << info.metadataChangeTime().toString("yyyy/MM/dd hh:mm:ss");
        qDebug() << "最后修改日期：" << info.lastModified().toString("yyyy/MM/dd hh:mm:ss");
    });
}

Widget::~Widget()
{
    delete ui;
}


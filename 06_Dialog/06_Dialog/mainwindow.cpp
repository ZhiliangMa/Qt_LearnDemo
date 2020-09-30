#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    resize(480, 320);
    setWindowTitle("Hello");

    // 新建菜单栏
    QMenuBar *mBar = menuBar();
    setMenuBar(mBar);
    // 添加菜单
    QMenu *menu = mBar->addMenu("对话框");

    // 添加菜单项，添加信号槽弹出 模态对话框
    QAction *p1 = menu->addAction("模态对话框");
    connect( p1, &QAction::triggered,
             [=]()
            {
                dlg.setWindowTitle("模态对话框");
                dlg.exec();
                qDebug() << "111";
            });

    // 添加菜单项，添加信号槽弹出 非模态对话框
    QAction *p2 = menu->addAction("非模态对话框");
    connect( p2, &QAction::triggered,
             [=]()
            {
                // 可以用全作用域的写法，也可用堆区创建，加上生命范围
                //dlg.show();
                //qDebug() << "111";

                QDialog *p = new QDialog;
                p->setAttribute(Qt::WA_DeleteOnClose);// 应用控件时自动释放
                p->setWindowTitle("非模态对话框");
                p->show();
                qDebug() << "111";
            });

    // 添加菜单项，添加信号槽弹出 标准对话框-关于
    QAction *p3 = menu->addAction("标准对话框");
    connect( p3, &QAction::triggered,
             [=]()
            {
                QMessageBox::about(this, "about", "关于Qt");
                QMessageBox::critical(this, "critical", "错误");
                QMessageBox::information(this, "info", "信息");
                QMessageBox::warning(this, "warning", "警告");
            });

    // 添加菜单项，添加信号槽弹出 标准对话框-问题对话框
    QAction *p4 = menu->addAction("问题对话框");
    connect( p4, &QAction::triggered,
             [=]()
            {
                // 未指定枚举时，默认返回 QMessageBox::Yes 或 QMessageBox::No
                int ret = QMessageBox::question(this, "question", "是否？");
                // 指定枚举时，会返回指定枚举，同时对话框的按键文字也会发生变化
                //int ret = QMessageBox::question(this, "question", "是否？",
                //                                QMessageBox::Ok | QMessageBox::Cancel);

                switch(ret)
                {
                case QMessageBox::Yes:
                    qDebug() << "是";
                    break;
                case QMessageBox::No:
                    qDebug() << "否";
                    break;
                default:
                    break;
                }
            });

    // 添加菜单项，添加信号槽弹出 标准对话框-文件对话框
    QAction *p5 = menu->addAction("文件对话框");
    connect( p5, &QAction::triggered,
             [=]()
            {
                // 用打开的方式打开一个文件对话框
                // 打印选中该的路径名称。参数：父对象，对话框标题，默认打开路径，过滤的文件格式
                QString path = QFileDialog::getOpenFileName(this, "open",
                                                            "../",
                            "souce(*.cpp *.h);;Text(*.txt);;all(*.*)");
                // 调试输出选择路径
                qDebug() << path;
            });

    // 添加菜单项，添加信号槽弹出 标准对话框-颜色对话框
    QAction *p6 = menu->addAction("颜色对话框");
    connect( p6, &QAction::triggered,
             [=]()
            {
                // 默认用红色打开调色板
                QColor color = QColorDialog::getColor(QColor(255,0,0));
                // 调试输出RGB信息
                qDebug() << color.red() << color.green() << color.blue();
            });

    // 添加菜单项，添加信号槽弹出 标准对话框-字体对话框
    QAction *p7 = menu->addAction("字体对话框");
    connect( p7, &QAction::triggered,
             [=]()
            {
                // 默认用16号宋体打开字体对话框
                bool flag;
                QFont font = QFontDialog::getFont(&flag, QFont("宋体",16));
                // 调试输出字体、字号、加粗、倾斜
                qDebug() << font.family().toUtf8().data() << font.pointSize() << font.bold() << font.italic();
            });

}

MainWindow::~MainWindow()
{
}


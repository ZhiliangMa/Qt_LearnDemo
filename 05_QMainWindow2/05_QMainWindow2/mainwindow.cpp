#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    // 重置窗口大小
    resize(800, 480);

    // 菜单栏，最多只能有一个
    // 菜单栏创建
    QMenuBar *mbar = menuBar();
    // 将菜单栏放入到窗口中
    setMenuBar(mbar);

    // 创建菜单
    QMenu *fileMenu = mbar->addMenu("文件");
    QMenu *editMenu = mbar->addMenu("编辑");

    // 添加菜单项
    fileMenu->addAction("新建");
    // 添加分割线
    fileMenu->addSeparator();
    // 添加菜单项
    fileMenu->addAction("打开");

    // 工具栏，可以有多个
    QToolBar *toolBar = new QToolBar(this);
    addToolBar(Qt::LeftDockWidgetArea, toolBar);

}

MainWindow::~MainWindow()
{
}


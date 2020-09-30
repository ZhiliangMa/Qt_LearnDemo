#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    resize(480, 320);
    setWindowTitle("Hello");

    // 菜单栏，菜单栏在工程中已经有了的，直接调用函数就行，不用new
    QMenuBar *mBar = menuBar();
    // 添加菜单(菜单栏里的对象)，返回项目指针
    QMenu *pFile = mBar->addMenu("文件");
    // 添加菜单项（菜单栏里的项目，对对象的操作），并且添加动作
    QAction *pNew = pFile->addAction("新建");

    connect( pNew, &QAction::triggered,
             [=]()
            {
                qDebug() << "新建被按下";
            });

    pFile->addSeparator();// 添加分割线

    // 添加菜单项（菜单栏里项目的项目），并且添加动作
    QAction *pOpen = pFile->addAction("打开");

    connect( pOpen, &QAction::triggered,
             [=]()
            {
                qDebug() << "打开被按下";
            });

    // 工具栏，实质上是菜单项的快捷方式
    QToolBar *toolBar = addToolBar("toolBar");
    // 工具栏添加快捷键（直接将菜单项指针复制过来）
    toolBar->addAction(pNew);

    // 添加按钮到工具栏（平常软件中带图标的快捷方式都是按钮，）
    QPushButton *btnNew = new QPushButton;
    btnNew->setText("新建");
    toolBar->addWidget(btnNew);
    // 添加信号槽
    connect( btnNew, &QPushButton::clicked,
             [=]()
            {
                btnNew->setText("Done!");
            });

    // 状态栏，#include <QStatusBar>
    QStatusBar *sBar = statusBar();
    // 状态栏的项目叫做标签，#include <QLabel>
    QLabel *label = new QLabel(this);
    label->setText("Normal text file");
    // 从左往右依次添加
    sBar->addWidget(label);
    sBar->addWidget(new QLabel("New label", this));
    // 从右往左依次添加
    sBar->addPermanentWidget(new QLabel("Right label", this));

    // 核心控件。文本框，#include <QTextEdit>
    QTextEdit *textEdit = new QTextEdit(this);
    setCentralWidget(textEdit);// 设立中心

    // 浮动窗口,#include <QDockWidget>
    QDockWidget *dock = new QDockWidget(this);
    // 防止在窗口右侧
    addDockWidget(Qt::RightDockWidgetArea, dock);

    // 浮动窗口中添加控件，文本编辑区
    QTextEdit *textEditDock = new QTextEdit(this);
    dock->setWidget(textEditDock);
}

MainWindow::~MainWindow()
{
}


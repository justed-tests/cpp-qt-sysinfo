#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

#include "sysinfo.h"

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);

  SysInfo* info = &SysInfo::instance();

  qWarning() << info->memoryUsed();
  qWarning() << endl;
  qWarning() << info->cpuLoadAverage();
}

MainWindow::~MainWindow()
{
  delete ui;
}

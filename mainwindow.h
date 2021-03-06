#pragma once

#include <QMainWindow>
#include "cpuwidget.h"
#include "memorywidget.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget* parent = 0);
  ~MainWindow();

private:
  Ui::MainWindow *ui;
  CpuWidget mCpuWidget;
  MemoryWidget mMemoryWidget;
};

#pragma once

#include <QtCharts/QPieSeries>
#include "sysinfowidget.h"

class CpuWidget : public SysInfoWidget
{
  Q_OBJECT
public:
  explicit CpuWidget(QWidget* parent = 0);
protected slots:
  void updateSeries() override;
private:
  QtCharts::QPieSeries* mSeries;
};

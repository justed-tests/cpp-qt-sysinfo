#pragma once

#include "sysinfo.h"

#include<QtGlobal>
#include<QVector>

class SysInfoLinuxImpl : public SysInfo
{
public:
  SysInfoLinuxImpl();
  void init() override;
  double cpuLoadAverage() override;
  double memoryUsed() override;

private:
  QVector<qulonglong> cpuRawData();

  QVector<qulonglong> mCpuLoadLastValues;
};

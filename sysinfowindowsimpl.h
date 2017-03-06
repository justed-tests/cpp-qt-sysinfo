#pragma once

#include "sysinfo.h"

class SysInfoWindowsImpl : public SysInfo
{
public:
  SysInfoWindowsImpl();

  void init() override;
  double cpuLoadAverage() override;
  double memoryUsed() override;
};

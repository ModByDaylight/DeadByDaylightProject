#include "MemoryUsageAnalytics.h"

FMemoryUsageAnalytics::FMemoryUsageAnalytics() {
    this->TotalPhysical = 0;
    this->TotalVirtual = 0;
    this->PeakUsedPhysical = 0;
    this->PeakUsedVirtual = 0;
    this->AvailablePhysical = 0;
    this->AvailableVirtual = 0;
}


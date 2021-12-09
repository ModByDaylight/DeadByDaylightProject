#include "NetSynchedClock.h"

void UNetSynchedClock::Server_RequestServerTime_Implementation() {
}
bool UNetSynchedClock::Server_RequestServerTime_Validate() {
    return true;
}

void UNetSynchedClock::Client_ReportServerTime_Implementation(float serverTime) {
}

UNetSynchedClock::UNetSynchedClock() {
    this->_serverTimeUpdateDelay = 10.00f;
}


#include "SpeedBasedNetSyncedValue.h"

FSpeedBasedNetSyncedValue::FSpeedBasedNetSyncedValue() {
    this->_replicatedValue = 0.00f;
    this->_replicatedSpeed = 0.00f;
    this->_replicatedLastUpdateTimestamp = 0.00f;
}


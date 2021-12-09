#include "ReplicationTimerData.h"

FReplicationTimerData::FReplicationTimerData() {
    this->Timestamp = 0.00f;
    this->Duration = 0.00f;
    this->State = ETimerState::Cleared;
}


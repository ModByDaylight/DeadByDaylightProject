#include "DBDTimer.h"

FDBDTimer::FDBDTimer() {
    this->_startTime = 0.00f;
    this->_startTimeDirty = false;
    this->_replicateTimeLeft = false;
    this->_interpSpeed = 0.00f;
}


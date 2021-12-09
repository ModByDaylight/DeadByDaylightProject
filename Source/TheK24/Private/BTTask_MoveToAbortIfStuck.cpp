#include "BTTask_MoveToAbortIfStuck.h"

UBTTask_MoveToAbortIfStuck::UBTTask_MoveToAbortIfStuck() {
    this->_deltaConsideredStuck = 0.00f;
    this->_maxTimeStuck = 0.00f;
}


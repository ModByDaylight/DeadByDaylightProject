#include "BTTask_SetRandomNavPoint.h"

UBTTask_SetRandomNavPoint::UBTTask_SetRandomNavPoint() {
    this->MinAroundRadius = 0.00f;
    this->MaxAroundRadius = 300.00f;
    this->MaxNbAttempts = 8;
    this->FilterClass = NULL;
}


#include "BTTask_FleeMoveTo.h"

UBTTask_FleeMoveTo::UBTTask_FleeMoveTo() {
    this->InScrambleMovementMinDistance = 2400.00f;
    this->OutScrambleMovementMinDistance = 2000.00f;
    this->InScrambleMovementInterval = 1.00f;
    this->LoopScrambleMovementInterval = 5.00f;
    this->LoopScrambleMovementRandomDeviation = 1.00f;
    this->CrouchWithinLastEvadeLoopPointRadius = 100.00f;
}


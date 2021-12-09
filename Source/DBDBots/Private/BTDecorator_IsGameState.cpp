#include "BTDecorator_IsGameState.h"

UBTDecorator_IsGameState::UBTDecorator_IsGameState() {
    this->RemainingObjectiveOp = EArithmeticKeyOperation::Equal;
    this->NbRemainingObjectives = 0;
    this->SurvivorsLeftOp = EArithmeticKeyOperation::Equal;
    this->NbSurvivorsLeft = 0;
}


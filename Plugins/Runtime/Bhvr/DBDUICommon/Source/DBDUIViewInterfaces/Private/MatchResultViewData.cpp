#include "MatchResultViewData.h"

FMatchResultViewData::FMatchResultViewData() {
    this->IsSlasher = false;
    this->SurvivorResult = EGameState::VE_Active;
    this->KillerResult = EKillerResult::DisgracefulDefeat;
    this->Duration = 0.00f;
}


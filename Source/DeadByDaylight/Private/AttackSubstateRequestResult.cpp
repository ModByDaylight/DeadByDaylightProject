#include "AttackSubstateRequestResult.h"

FAttackSubstateRequestResult::FAttackSubstateRequestResult() {
    this->IsValid = false;
    this->RequestedNextSubstate = EAttackSubstate::VE_None;
    this->ServerNextSubstate = EAttackSubstate::VE_None;
}


#include "AttackEventTypeDetails.h"

FAttackEventTypeDetails::FAttackEventTypeDetails() {
    this->AttackEventType = EAttackEventType::VE_None;
    this->CanBeProtective = false;
    this->AssociatedCharacter = 0;
}


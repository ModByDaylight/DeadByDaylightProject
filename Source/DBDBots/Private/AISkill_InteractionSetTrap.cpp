#include "AISkill_InteractionSetTrap.h"
#include "BaseTrap.h"

UAISkill_InteractionSetTrap::UAISkill_InteractionSetTrap() {
    this->TrapClass = ABaseTrap::StaticClass();
    this->MaxDistanceFromPointOfInterest = 800.00f;
    this->MaxDistanceFromAnotherSetTrap = 1600.00f;
}


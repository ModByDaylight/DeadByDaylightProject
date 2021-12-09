#include "AISkill_Diversion.h"

UAISkill_Diversion::UAISkill_Diversion() {
    this->PerkId = TEXT("Diversion");
    this->DiversionFromGoalClasses.AddDefaulted(3);
    this->ThrowOnInteractablesAtDifficultyLevel = EAIDifficultyLevel::Hard;
    this->MaxThrowOnInteractableHalfAngle = 30.00f;
    this->MaxMoveToTargetDistance = 1200.00f;
    this->PlanInterval = 1.00f;
}


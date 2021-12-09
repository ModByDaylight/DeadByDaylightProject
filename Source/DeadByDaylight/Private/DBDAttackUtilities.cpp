#include "DBDAttackUtilities.h"

class AActor;

EAttackType UDBDAttackUtilities::GetCurrentAttackType(const AActor* attacker) {
    return EAttackType::VE_None;
}

float UDBDAttackUtilities::GetCurrentAttackSubstateRemainingTime(const AActor* attacker) {
    return 0.0f;
}

UDBDAttackUtilities::UDBDAttackUtilities() {
}


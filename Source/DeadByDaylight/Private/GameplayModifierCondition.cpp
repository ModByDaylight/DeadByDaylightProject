#include "GameplayModifierCondition.h"

class UGameplayModifierContainer;
class ADBDPlayer;

void UGameplayModifierCondition::SetOwningGameplayModifier(UGameplayModifierContainer* OwningGameplayModifier) {
}


bool UGameplayModifierCondition::IsApplicable_Implementation() const {
    return false;
}

ADBDPlayer* UGameplayModifierCondition::GetOwningPlayer() const {
    return NULL;
}

UGameplayModifierContainer* UGameplayModifierCondition::GetOwningGameplayModifier() const {
    return NULL;
}

UGameplayModifierCondition::UGameplayModifierCondition() {
}


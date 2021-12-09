#include "DisplayStandMeatHookRequesterComponent.h"

class AActor;

void UDisplayStandMeatHookRequesterComponent::OnMeatHookDisplayed(AActor* actor, TArray<FCharmIdSlot> charmIDs) {
}

UDisplayStandMeatHookRequesterComponent::UDisplayStandMeatHookRequesterComponent() {
    this->_meatHookClass = NULL;
}


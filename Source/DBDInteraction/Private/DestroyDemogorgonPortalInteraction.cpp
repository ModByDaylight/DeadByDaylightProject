#include "DestroyDemogorgonPortalInteraction.h"

class AActor;

void UDestroyDemogorgonPortalInteraction::Authority_OnChargeApplied(float individualChargeAmount, float totalChargeAmount, AActor* chargeInstigator, bool wasCoop, float deltaTime) {
}

UDestroyDemogorgonPortalInteraction::UDestroyDemogorgonPortalInteraction() {
    this->_owningPortal = NULL;
}


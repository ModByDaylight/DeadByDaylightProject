#include "HarpoonChainPositioner.h"

class ADBDPlayer;
class AHarpoonProp;
class AActor;

void UHarpoonChainPositioner::OnOwnerCollected(ADBDPlayer* collector) {
}




AHarpoonProp* UHarpoonChainPositioner::GetHarpoonProp() const {
    return NULL;
}

AActor* UHarpoonChainPositioner::GetCurrentHarpoon() const {
    return NULL;
}

void UHarpoonChainPositioner::AttachToRifle() {
}

void UHarpoonChainPositioner::AttachToAnimSocket() {
}

UHarpoonChainPositioner::UHarpoonChainPositioner() {
    this->_harpoonPropClass = NULL;
    this->_harpoonMinimumSnapBackDistance = 50.00f;
    this->_harpoonProp = NULL;
    this->_harpoonProjectile = NULL;
    this->_collector = NULL;
    this->_chain = NULL;
}


#include "TwinDestructionComponent.h"
#include "Net/UnrealNetwork.h"


void UTwinDestructionComponent::OnDyingMontageEnd(const FAnimationMontageDescriptor montage, bool interrupted) {
}



void UTwinDestructionComponent::Authority_OnTwinQuickDestroyOver() {
}

void UTwinDestructionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTwinDestructionComponent, _dyingTransform);
    DOREPLIFETIME(UTwinDestructionComponent, _diedFromSurvivorRemovingTwin);
}

UTwinDestructionComponent::UTwinDestructionComponent() {
    this->_huskClass = NULL;
    this->_diedFromSurvivorRemovingTwin = false;
    this->_dyingFromSurvivorTranslation = 100.00f;
}


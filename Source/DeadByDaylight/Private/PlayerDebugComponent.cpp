#include "PlayerDebugComponent.h"
#include "Net/UnrealNetwork.h"

void UPlayerDebugComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPlayerDebugComponent, _disableStartUpdateMontageDuringEnter);
    DOREPLIFETIME(UPlayerDebugComponent, _allowPalletPullUpInteraction);
}

UPlayerDebugComponent::UPlayerDebugComponent() {
    this->_disableStartUpdateMontageDuringEnter = false;
    this->_allowPalletPullUpInteraction = false;
}


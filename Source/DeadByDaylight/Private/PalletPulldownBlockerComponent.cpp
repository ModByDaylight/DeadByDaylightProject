#include "PalletPulldownBlockerComponent.h"
#include "Net/UnrealNetwork.h"

void UPalletPulldownBlockerComponent::OnRep_IsPalletPulldownBlockedByEntity() {
}

void UPalletPulldownBlockerComponent::Multicast_PalletPulldownBlockedShowCosmetic_Implementation() {
}

void UPalletPulldownBlockerComponent::Multicast_PalletPulldownBlockedHideCosmetic_Implementation() {
}

void UPalletPulldownBlockerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalletPulldownBlockerComponent, _isPalletPulldownBlockedByEntity);
}

UPalletPulldownBlockerComponent::UPalletPulldownBlockerComponent() {
    this->_isPalletPulldownBlockedByEntity = false;
    this->_blockedDisappearFxTime = 3.00f;
}


#include "Winter2021PlayerComponent.h"
#include "Net/UnrealNetwork.h"

void UWinter2021PlayerComponent::Client_UnlockCosmetic_Implementation() {
}

void UWinter2021PlayerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UWinter2021PlayerComponent, _hasCosmeticUnlockRequirementBeenSatisfied);
    DOREPLIFETIME(UWinter2021PlayerComponent, _hasSentUnlockCosmeticRequest);
    DOREPLIFETIME(UWinter2021PlayerComponent, _hasAllCosmeticRewards);
}

UWinter2021PlayerComponent::UWinter2021PlayerComponent() {
    this->_hasCosmeticUnlockRequirementBeenSatisfied = false;
    this->_hasSentUnlockCosmeticRequest = false;
    this->_hasAllCosmeticRewards = false;
}


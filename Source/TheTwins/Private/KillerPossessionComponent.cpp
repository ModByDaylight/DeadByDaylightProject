#include "KillerPossessionComponent.h"
#include "Net/UnrealNetwork.h"

void UKillerPossessionComponent::OnRep_ShouldDeactivateCollisionsWithSurvivors() {
}

void UKillerPossessionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UKillerPossessionComponent, _shouldDeactivateCollisionsWithSurvivors);
}

UKillerPossessionComponent::UKillerPossessionComponent() {
    this->_shouldDeactivateCollisionsWithSurvivors = false;
}


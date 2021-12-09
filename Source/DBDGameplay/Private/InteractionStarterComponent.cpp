#include "InteractionStarterComponent.h"
#include "Net/UnrealNetwork.h"

void UInteractionStarterComponent::OnRep_ShouldStartInteraction() {
}

void UInteractionStarterComponent::OnInteractionStarted() {
}

void UInteractionStarterComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UInteractionStarterComponent, _interaction);
    DOREPLIFETIME(UInteractionStarterComponent, _shouldStartInteraction);
}

UInteractionStarterComponent::UInteractionStarterComponent() {
    this->_interaction = NULL;
    this->_shouldStartInteraction = false;
}


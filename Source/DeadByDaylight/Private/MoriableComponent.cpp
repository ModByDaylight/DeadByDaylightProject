#include "MoriableComponent.h"
#include "Net/UnrealNetwork.h"

void UMoriableComponent::OnRep_MoriInteractions() {
}

void UMoriableComponent::OnMoriUpdateStart() {
}

void UMoriableComponent::OnMoriFinished() {
}

void UMoriableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMoriableComponent, _moriInteractions);
}

UMoriableComponent::UMoriableComponent() {
}


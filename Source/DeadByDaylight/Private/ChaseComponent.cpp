#include "ChaseComponent.h"
#include "Net/UnrealNetwork.h"

void UChaseComponent::OnRep_IsInChase() {
}

bool UChaseComponent::IsInChase() const {
    return false;
}

void UChaseComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UChaseComponent, _isInChase);
}

UChaseComponent::UChaseComponent() {
}


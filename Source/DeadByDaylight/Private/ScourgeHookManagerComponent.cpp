#include "ScourgeHookManagerComponent.h"
#include "Net/UnrealNetwork.h"

void UScourgeHookManagerComponent::OnRep_ScourgeHooks() {
}

void UScourgeHookManagerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UScourgeHookManagerComponent, _scourgeHooks);
}

UScourgeHookManagerComponent::UScourgeHookManagerComponent() {
}


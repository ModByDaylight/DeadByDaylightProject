#include "BlockableComponent.h"
#include "Net/UnrealNetwork.h"

class UObject;
class ADBDPlayer;

void UBlockableComponent::OnRep_ReplicatedDatum() {
}

void UBlockableComponent::Authority_RemoveBlock(const UObject* source) {
}

void UBlockableComponent::Authority_AddTimedBlock(const UObject* source, const float duration, const TSet<ADBDPlayer*>& affectedPlayers) {
}

void UBlockableComponent::Authority_AddBlock(const UObject* source, const TSet<ADBDPlayer*>& affectedPlayers) {
}

void UBlockableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBlockableComponent, _replicatedDatum);
}

UBlockableComponent::UBlockableComponent() {
}


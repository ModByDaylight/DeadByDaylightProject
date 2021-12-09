#include "PerkCollectionComponent.h"
#include "Net/UnrealNetwork.h"

class UPerk;

void UPerkCollectionComponent::OnRep_Array(const TArray<UPerk*>& oldArray) {
}

void UPerkCollectionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPerkCollectionComponent, _array);
}

UPerkCollectionComponent::UPerkCollectionComponent() {
}


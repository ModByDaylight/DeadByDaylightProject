#include "HalloweenEventComponent.h"
#include "Net/UnrealNetwork.h"

class USectionnedChargeableComponent;

void UHalloweenEventComponent::Server_SpawnVial_Implementation(float initialCharge) {
}
bool UHalloweenEventComponent::Server_SpawnVial_Validate(float initialCharge) {
    return true;
}

void UHalloweenEventComponent::OnRep_Vial() {
}

void UHalloweenEventComponent::OnFinishedPlaying(FGameplayTag gameEventType, const FGameEventData& gameEventData) {
}

bool UHalloweenEventComponent::IsVialFull() const {
    return false;
}

USectionnedChargeableComponent* UHalloweenEventComponent::GetVial() const {
    return NULL;
}

void UHalloweenEventComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UHalloweenEventComponent, _toxinVialComponent);
}

UHalloweenEventComponent::UHalloweenEventComponent() {
    this->_toxinVialComponent = NULL;
}


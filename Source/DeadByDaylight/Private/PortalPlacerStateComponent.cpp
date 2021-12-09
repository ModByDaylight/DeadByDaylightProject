#include "PortalPlacerStateComponent.h"
#include "Net/UnrealNetwork.h"

class ASlasherPlayer;

void UPortalPlacerStateComponent::UpdateRemainingPortalCount() {
}

void UPortalPlacerStateComponent::OnLevelReadyToPlay() {
}

bool UPortalPlacerStateComponent::IsUsePortalCooldownDone() const {
    return false;
}

void UPortalPlacerStateComponent::InitializeTunableValues(ASlasherPlayer* killer) {
}

float UPortalPlacerStateComponent::GetTeleportDuration() const {
    return 0.0f;
}

int32 UPortalPlacerStateComponent::GetRemainingPortalCount() const {
    return 0;
}

void UPortalPlacerStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPortalPlacerStateComponent, _remainingPortals);
    DOREPLIFETIME(UPortalPlacerStateComponent, _placedPortals);
    DOREPLIFETIME(UPortalPlacerStateComponent, _restrictedPortalLocations);
}

UPortalPlacerStateComponent::UPortalPlacerStateComponent() {
    this->_remainingPortals = 0;
}


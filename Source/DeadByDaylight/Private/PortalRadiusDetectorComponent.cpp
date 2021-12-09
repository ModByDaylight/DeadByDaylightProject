#include "PortalRadiusDetectorComponent.h"
#include "Net/UnrealNetwork.h"

void UPortalRadiusDetectorComponent::OnRep_PlayersInsideRadius() {
}

void UPortalRadiusDetectorComponent::Authority_OnLevelReadyToPlay() {
}

void UPortalRadiusDetectorComponent::Authority_CallOnPortalEffectsApplied(FPortalRadiusDetectorComponentCallback callback) {
}

void UPortalRadiusDetectorComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPortalRadiusDetectorComponent, _playersInsideRadius);
}

UPortalRadiusDetectorComponent::UPortalRadiusDetectorComponent() {
}


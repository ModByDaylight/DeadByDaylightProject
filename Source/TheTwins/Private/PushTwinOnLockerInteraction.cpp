#include "PushTwinOnLockerInteraction.h"
#include "Net/UnrealNetwork.h"

class AConjoinedTwin;
class ADBDPlayer;

void UPushTwinOnLockerInteraction::OnTwinSet(AConjoinedTwin* twin) {
}

void UPushTwinOnLockerInteraction::OnRep_PushTwinOnLockerChargeable() {
}

void UPushTwinOnLockerInteraction::Authority_OnSurvivorInLockerChanged(ADBDPlayer* oldSurvivor, ADBDPlayer* newSurvivor) {
}

void UPushTwinOnLockerInteraction::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPushTwinOnLockerInteraction, _pushTwinOnLockerChargeable);
}

UPushTwinOnLockerInteraction::UPushTwinOnLockerInteraction() {
    this->_pushTwinOnLockerChargeable = NULL;
}


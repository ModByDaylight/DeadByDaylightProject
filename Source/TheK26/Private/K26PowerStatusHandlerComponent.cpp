#include "K26PowerStatusHandlerComponent.h"
#include "Net/UnrealNetwork.h"

class ACamperPlayer;
class ASlasherPlayer;

void UK26PowerStatusHandlerComponent::Multicast_OnStopRemovingCrow_Implementation(const ACamperPlayer* survivor) {
}

void UK26PowerStatusHandlerComponent::Multicast_OnStartRemovingCrow_Implementation(const ACamperPlayer* survivor) {
}

void UK26PowerStatusHandlerComponent::Multicast_OnIdleCrowInterrupt_Implementation(ACamperPlayer* survivor) {
}

void UK26PowerStatusHandlerComponent::Multicast_OnCrowDetached_Implementation(const ACamperPlayer* survivor) {
}

void UK26PowerStatusHandlerComponent::Multicast_OnCrowDamagedSurvivor_Implementation(ASlasherPlayer* killer, ACamperPlayer* survivor) {
}

void UK26PowerStatusHandlerComponent::Multicast_OnCrowAttached_Implementation(const ACamperPlayer* survivor) {
}



void UK26PowerStatusHandlerComponent::Authority_OnSurvivorAdded(ACamperPlayer* survivor) {
}

void UK26PowerStatusHandlerComponent::Authority_OnKillerInstinctTimePassed(const ACamperPlayer* survivor) {
}

void UK26PowerStatusHandlerComponent::Authority_OnIntroCompleted() {
}

void UK26PowerStatusHandlerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UK26PowerStatusHandlerComponent, _survivorStatusList);
}

UK26PowerStatusHandlerComponent::UK26PowerStatusHandlerComponent() {
    this->_statusIndicatorClass = NULL;
}


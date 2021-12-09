#include "EvilWithinComponent.h"
#include "Net/UnrealNetwork.h"

class ADBDPlayer;

void UEvilWithinComponent::OnRep_CurrentTier(int32 previousTier) {
}

void UEvilWithinComponent::OnLevelReadyToPlay() {
}

bool UEvilWithinComponent::IsAtLastTier() const {
    return false;
}

float UEvilWithinComponent::GetRequirementForTier(int32 tier) const {
    return 0.0f;
}

float UEvilWithinComponent::GetPercentStalkingPointsInCurrentTier() const {
    return 0.0f;
}

int32 UEvilWithinComponent::GetMaxTier() const {
    return 0;
}

int32 UEvilWithinComponent::GetCurrentTier() const {
    return 0;
}

bool UEvilWithinComponent::CanStandKill(const ADBDPlayer* player) const {
    return false;
}

bool UEvilWithinComponent::CanBeStandingKilled(const ADBDPlayer* player) const {
    return false;
}

void UEvilWithinComponent::Authority_OnStalkPointsAdded(float stalkPoints) {
}

void UEvilWithinComponent::Authority_OnPlayerDisconnect(ADBDPlayer* player) {
}

void UEvilWithinComponent::Authority_NotifyKill(ADBDPlayer* killedPlayer) {
}

void UEvilWithinComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UEvilWithinComponent, _currentTier);
    DOREPLIFETIME(UEvilWithinComponent, _lastTierTimeStart);
}

UEvilWithinComponent::UEvilWithinComponent() {
    this->_currentTier = 0;
    this->_lastTierTimeStart = 0.00f;
}


#include "GhostStealthComponent.h"
#include "Net/UnrealNetwork.h"
#include "TimerObject.h"

class ADBDPlayer;
class ACharacter;

void UGhostStealthComponent::SetRedStainVisibility(const bool visible) {
}

void UGhostStealthComponent::OnRep_StealthState(EGhostStealthState previousState) {
}

void UGhostStealthComponent::Multicast_BroadcastOnSuccessfulAttackInStealth_Implementation(ADBDPlayer* target) {
}

bool UGhostStealthComponent::IsStealthReadyToActivate() const {
    return false;
}

bool UGhostStealthComponent::IsStealth() const {
    return false;
}

EGhostStealthState UGhostStealthComponent::GetStealthState() const {
    return EGhostStealthState::AWAITING_ACTIVATION;
}

float UGhostStealthComponent::GetStealthChargePercent() const {
    return 0.0f;
}

void UGhostStealthComponent::Client_SpawnMarkerOnCharacter_Implementation(ACharacter* character) {
}

void UGhostStealthComponent::Client_OnPlayerSpottedKiller_Implementation(ADBDPlayer* player) {
}

void UGhostStealthComponent::Authority_TryActivateStealth() {
}

void UGhostStealthComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGhostStealthComponent, _stealthState);
}

UGhostStealthComponent::UGhostStealthComponent() {
    this->_stealthState = EGhostStealthState::AWAITING_ACTIVATION;
    this->_cooldownTimer = CreateDefaultSubobject<UTimerObject>(TEXT("StealthCooldownTimer"));
    this->_markerMaxAngleOffset = 0.00f;
    this->_useKillerInstinctWhenSpotted = true;
    this->_sightableComponent = NULL;
    this->_stalkerComponent = NULL;
}


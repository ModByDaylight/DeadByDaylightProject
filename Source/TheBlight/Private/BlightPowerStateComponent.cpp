#include "BlightPowerStateComponent.h"
#include "Net/UnrealNetwork.h"

class UTimerObject;
class UBlightPowerState;

void UBlightPowerStateComponent::Server_SetWallGrabState_Implementation(const EWallGrabState newState) {
}
bool UBlightPowerStateComponent::Server_SetWallGrabState_Validate(const EWallGrabState newState) {
    return true;
}

void UBlightPowerStateComponent::ResetDashTokens() {
}

void UBlightPowerStateComponent::OnRep_StateTimer() {
}

void UBlightPowerStateComponent::OnRep_DashTokens() {
}

void UBlightPowerStateComponent::OnLevelReadyToPlay() {
}

void UBlightPowerStateComponent::Multicast_SetWallGrabState_Implementation(const EWallGrabState newState) {
}
bool UBlightPowerStateComponent::Multicast_SetWallGrabState_Validate(const EWallGrabState newState) {
    return true;
}

float UBlightPowerStateComponent::GetStateTimeRemaining() const {
    return 0.0f;
}

UTimerObject* UBlightPowerStateComponent::GetStateTimer() const {
    return NULL;
}

float UBlightPowerStateComponent::GetStateTimeElapsed() const {
    return 0.0f;
}

UBlightPowerState* UBlightPowerStateComponent::GetPowerStateByEnum(const EWallGrabState stateEnum) const {
    return NULL;
}

EWallGrabState UBlightPowerStateComponent::GetPowerState() const {
    return EWallGrabState::None;
}

float UBlightPowerStateComponent::GetLookAngleDegrees() const {
    return 0.0f;
}

uint8 UBlightPowerStateComponent::GetDashTokensRemaining() const {
    return 0;
}

UBlightPowerState* UBlightPowerStateComponent::GetCurrentPowerState() const {
    return NULL;
}

bool UBlightPowerStateComponent::CanDash() const {
    return false;
}

void UBlightPowerStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBlightPowerStateComponent, _stateTimer);
    DOREPLIFETIME(UBlightPowerStateComponent, _dashTokens);
}

UBlightPowerStateComponent::UBlightPowerStateComponent() {
    this->_powerInteractionDefinition = NULL;
    this->_stateTimer = NULL;
    this->_currentBlightPowerState = NULL;
    this->_dashTokens = 0;
}


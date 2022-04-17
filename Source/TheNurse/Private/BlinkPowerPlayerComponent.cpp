#include "BlinkPowerPlayerComponent.h"
#include "Net/UnrealNetwork.h"

class AActor;

void UBlinkPowerPlayerComponent::Setup(const FBlinkPowerSetupParams& params) {
}

void UBlinkPowerPlayerComponent::Server_TriggerCooldown_Implementation(float duration) {
}

void UBlinkPowerPlayerComponent::Server_TriggerChainBlink_Implementation(int32 remainingBlinkCharges) {
}

void UBlinkPowerPlayerComponent::Server_SetState_Implementation(EBlinkPowerState state) {
}

void UBlinkPowerPlayerComponent::Server_InterruptDuringChainBlink_Implementation(AActor* interruptedPlayer) {
}

void UBlinkPowerPlayerComponent::OnRep_BlinkState(EBlinkPowerState oldState) {
}

void UBlinkPowerPlayerComponent::OnRep_BlinkCharges() {
}

void UBlinkPowerPlayerComponent::OnLevelReadyToPlay() {
}

void UBlinkPowerPlayerComponent::OnAttackStarted(const EAttackType attackType) {
}

void UBlinkPowerPlayerComponent::OnAttackFinished(const EAttackType attackType) {
}

bool UBlinkPowerPlayerComponent::IsChargingBlink() const {
    return false;
}

bool UBlinkPowerPlayerComponent::IsChargeFull() const {
    return false;
}

bool UBlinkPowerPlayerComponent::IsBlinking() const {
    return false;
}

float UBlinkPowerPlayerComponent::GetRechargeProgressPercent() const {
    return 0.0f;
}

EBlinkPowerState UBlinkPowerPlayerComponent::GetPowerState() const {
    return EBlinkPowerState::Ready;
}

float UBlinkPowerPlayerComponent::GetCooldownTimerDuration() const {
    return 0.0f;
}

float UBlinkPowerPlayerComponent::GetCooldownRemainingTime() const {
    return 0.0f;
}

float UBlinkPowerPlayerComponent::GetCooldownProgressPercent() const {
    return 0.0f;
}

float UBlinkPowerPlayerComponent::GetChainBlinkTimerDuration() const {
    return 0.0f;
}

float UBlinkPowerPlayerComponent::GetChainBlinkRemainingTime() const {
    return 0.0f;
}

float UBlinkPowerPlayerComponent::GetChainBlinkProgressPercent() const {
    return 0.0f;
}

int32 UBlinkPowerPlayerComponent::GetBlinkCharges() const {
    return 0;
}

void UBlinkPowerPlayerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBlinkPowerPlayerComponent, _powerState);
    DOREPLIFETIME(UBlinkPowerPlayerComponent, _blinkCharges);
    DOREPLIFETIME(UBlinkPowerPlayerComponent, _wasCurrentChargeSetByRecharge);
}

UBlinkPowerPlayerComponent::UBlinkPowerPlayerComponent() {
    this->_fatigueSpeedCurve = NULL;
    this->_powerState = EBlinkPowerState::Ready;
    this->_blinkCharges = 0;
    this->_wasCurrentChargeSetByRecharge = false;
    this->_chainBlinkTimer = NULL;
    this->_cooldownTimer = NULL;
    this->_rechargeTimer = NULL;
}


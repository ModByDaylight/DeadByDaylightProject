#include "ChargeableComponent.h"
#include "Net/UnrealNetwork.h"

class AActor;

void UChargeableComponent::SetSecondsToCharge(float secondsToCharge) {
}

void UChargeableComponent::SetDechargeRate(float dechargeRate) {
}

void UChargeableComponent::OnRep_CurrentCharge() {
}

void UChargeableComponent::OnCurrentChargeChanged(float value) {
}

void UChargeableComponent::Multicast_OnEmptied_Implementation() const {
}

void UChargeableComponent::Multicast_OnCompleteChanged_Implementation(bool completed) const {
}

bool UChargeableComponent::IsSkillCheckTimePenaltyActive() const {
    return false;
}

bool UChargeableComponent::IsChargeComplete() const {
    return false;
}

void UChargeableComponent::IncreaseMaxChargeAdditive(float secondsToAdd) {
}

void UChargeableComponent::IncreaseMaxCharge(float percent) {
}

bool UChargeableComponent::HasPlayerDoneSkillCheck(int32 playerID) const {
    return false;
}

float UChargeableComponent::GetTunableValue(FName TunableValueID) const {
    return 0.0f;
}

float UChargeableComponent::GetPlayerCountPenaltyModifier(int32 playerCount) const {
    return 0.0f;
}

float UChargeableComponent::GetPercentComplete() const {
    return 0.0f;
}

float UChargeableComponent::GetMaxCharge() const {
    return 0.0f;
}

float UChargeableComponent::GetCurrentCharge() const {
    return 0.0f;
}

float UChargeableComponent::GetChargeRemaining() const {
    return 0.0f;
}

void UChargeableComponent::Authority_SetEnableSkillCheckFailurePenalty(const bool enable) {
}

void UChargeableComponent::Authority_SetEnableAddCharge(const bool enable) {
}

void UChargeableComponent::Authority_Reset() {
}

void UChargeableComponent::Authority_ApplyStartingCharge() {
}

void UChargeableComponent::Authority_AddChargePercent(float chargePercent, AActor* instigator) {
}

void UChargeableComponent::Authority_AddCharge(float chargeAmount, AActor* instigator, bool bypassSkillCheckFail) {
}

void UChargeableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UChargeableComponent, _currentCharge);
}

UChargeableComponent::UChargeableComponent() {
    this->AllowSkillChecksAtFullCharge = false;
    this->DechargeDelay = 0.00f;
    this->_isCharging = false;
    this->_startingChargePercent = 0.00f;
    this->_dechargeRate = 0.00f;
    this->_enableAddCharge = true;
    this->_enableSkillCheckFailurePenalty = true;
    this->_isDecharging = false;
    this->_stopDechargingWhenComplete = false;
}


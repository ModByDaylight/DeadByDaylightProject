#include "Perk.h"
#include "Net/UnrealNetwork.h"
#include "ManualIconStrategy.h"

class UTimerObject;

void UPerk::SetIsUsable(bool value) {
}

void UPerk::OnRep_TokenCount(int32 oldCount) {
}

void UPerk::OnRep_PerkLevelData() {
}

void UPerk::OnRep_PerkInitializationData() {
}

void UPerk::OnRep_IsUsable() const {
}

void UPerk::OnRep_CooldownTimer() const {
}

bool UPerk::IsHudIconTimerDone() const {
    return false;
}

bool UPerk::IsCooldownTimerDone() const {
    return false;
}

int32 UPerk::GetTokenCount() const {
    return 0;
}

int32 UPerk::GetPerkLevel() const {
    return 0;
}

int32 UPerk::GetMaxTokenCount() const {
    return 0;
}

bool UPerk::GetIsUsable() const {
    return false;
}

float UPerk::GetHudIconTimerElapsedTimePercent() const {
    return 0.0f;
}

UTimerObject* UPerk::GetCooldownTimer() const {
    return NULL;
}

void UPerk::FireActivePerkEvent(const float percentage, const int32 chargeCount) {
}

void UPerk::Authority_TriggerHudIconTimer(float duration) {
}

void UPerk::Authority_TriggerCooldownTimer(const float coolddownTime) {
}

void UPerk::Authority_SetTokenCount(int32 value) {
}

void UPerk::Authority_SetMaxTokenCount(int32 value) {
}

void UPerk::Authority_SetIsUsable(bool value) {
}

void UPerk::Authority_IncrementToken() {
}

void UPerk::Authority_DecrementToken() {
}

void UPerk::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPerk, PerkLevelData);
    DOREPLIFETIME(UPerk, _isUsable);
    DOREPLIFETIME(UPerk, _perkInitializationData);
    DOREPLIFETIME(UPerk, _tokenCount);
    DOREPLIFETIME(UPerk, _maxTokenCount);
    DOREPLIFETIME(UPerk, _cooldownTimer);
    DOREPLIFETIME(UPerk, _hudIconTimer);
}

UPerk::UPerk() {
    this->PerkIconStrategyClass = UManualIconStrategy::StaticClass();
    this->_isUsable = true;
    this->BroadcastWhenApplicable = false;
    this->BroadcastOnTimer = false;
    this->BroadcastCooldownTimer = false;
    this->BroadcastInactiveCooldownTimer = false;
    this->BroadcastAlways = false;
    this->_perkIconStrategy = NULL;
    this->_tokenCount = 0;
    this->_maxTokenCount = 3;
    this->_cooldownTimer = NULL;
    this->_hudIconTimer = NULL;
}


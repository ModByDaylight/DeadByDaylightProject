#include "StatusEffect.h"
#include "Net/UnrealNetwork.h"

class ADBDPlayer;
class AActor;

bool UStatusEffect::ShouldDisplayStatusEffectIcon_Implementation() const {
    return false;
}

void UStatusEffect::SetStatusEffectIconPercentage(float value) {
}

void UStatusEffect::SetShouldDisplay(bool on) {
}

void UStatusEffect::OnShouldOriginatingPlayerChange_Implementation() {
}

void UStatusEffect::OnShouldDisplayChanged_Implementation(bool currentValue) {
}

void UStatusEffect::OnRep_StatusInitializationData() {
}

void UStatusEffect::OnRep_ShouldOriginatingPlayerChange() {
}

void UStatusEffect::OnRep_ShouldDisplay() {
}

void UStatusEffect::OnRep_ModifierData() {
}

void UStatusEffect::Multicast_SetRemainingLifetimeInitialized_Implementation(bool remainingLifetimeInitialized) {
}

void UStatusEffect::Multicast_SetRemainingLifetime_Implementation(float lifetime) {
}

bool UStatusEffect::IsOriginatorHooked() const {
    return false;
}

bool UStatusEffect::IsOriginatorAlive() const {
    return false;
}

bool UStatusEffect::IsKillerInOriginatorRange(float AdditiveRangeModifier) const {
    return false;
}

bool UStatusEffect::IsInOriginatorRange() const {
    return false;
}

void UStatusEffect::InitializeLifetime(float lifetime) {
}

EStatusEffectType UStatusEffect::GetStatusEffectType() const {
    return EStatusEffectType::None;
}

float UStatusEffect::GetStatusEffectCooldownRate() const {
    return 0.0f;
}

bool UStatusEffect::GetShouldDisplay_Implementation() const {
    return false;
}

ADBDPlayer* UStatusEffect::GetOriginatingPlayer() const {
    return NULL;
}

float UStatusEffect::GetLifetimeDuration() const {
    return 0.0f;
}

float UStatusEffect::GetCustomParam() const {
    return 0.0f;
}

void UStatusEffect::FireActiveStatusEffectEvent(float percentage, int32 levelToDisplay) const {
}

void UStatusEffect::BroadcastOriginatorGameEventNotification() {
}

void UStatusEffect::BroadcastGameEventNotification(FGameplayNotificationData notificationData, bool addToHistory) {
}

void UStatusEffect::Authority_SetRemainingLifetime(float lifetime) {
}

void UStatusEffect::Authority_RemoveSelf() {
}

void UStatusEffect::Authority_OnOriginatingPlayerEndPlay(AActor* actor, TEnumAsByte<EEndPlayReason::Type> endPlayReason) {
}

void UStatusEffect::Authority_EndSelf_Implementation() {
}

void UStatusEffect::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UStatusEffect, ModifierData);
    DOREPLIFETIME(UStatusEffect, ShouldDisplay);
    DOREPLIFETIME(UStatusEffect, _statusInitializationData);
}

UStatusEffect::UStatusEffect() {
    this->ShouldDisplay = false;
    this->CustomParam = 0.00f;
    this->_removeOnRemainingLifetimeEnded = true;
    this->BroadcastAsStatusEffectWhenApplicable = false;
    this->BroadcastAsStatusEffectByActivationTimer = false;
    this->BroadcastAsStatusEffectWhenLifeRemains = false;
    this->BroadcastAsStatusEffectByFunction = false;
    this->BroadcastAsStatusEffectAlways = false;
    this->BroadcastOriginatorGameEventNotificationWhenFirstApplicable = false;
}


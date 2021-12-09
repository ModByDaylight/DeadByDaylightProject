#include "SurvivorPlagueEffect.h"
#include "Net/UnrealNetwork.h"

void USurvivorPlagueEffect::RefreshSicknessGainValues() {
}






void USurvivorPlagueEffect::OnHitByVomit(bool isSuperVomit) {
}

void USurvivorPlagueEffect::Multicast_OnSurvivorVomit_Implementation() {
}

void USurvivorPlagueEffect::Multicast_OnSurvivorBecomesInfected_Implementation() {
}

void USurvivorPlagueEffect::Multicast_OnSicknessCured_Implementation() {
}

void USurvivorPlagueEffect::Multicast_OnSicknessChanged_Implementation(float newSickness) {
}

void USurvivorPlagueEffect::Multicast_OnMaxSicknessReached_Implementation() {
}

void USurvivorPlagueEffect::Multicast_AddOnScreenDebugMessage_Implementation(uint64 key, float duration, FColor displayColor, const FString& debugMessage) {
}

bool USurvivorPlagueEffect::IsInfected() const {
    return false;
}

bool USurvivorPlagueEffect::IsDebugModeActive() const {
    return false;
}

bool USurvivorPlagueEffect::HasMaxLevelSickness() const {
    return false;
}

TArray<float> USurvivorPlagueEffect::GetSicknessThresholds() const {
    return TArray<float>();
}

float USurvivorPlagueEffect::GetSicknessPercentage() const {
    return 0.0f;
}

uint8 USurvivorPlagueEffect::GetSicknessLevel() const {
    return 0;
}

float USurvivorPlagueEffect::GetSicknessAmount() const {
    return 0.0f;
}

uint8 USurvivorPlagueEffect::GetMaxSicknessLevel() const {
    return 0;
}

void USurvivorPlagueEffect::Authority_ResetSickness(float newSickness) {
}

void USurvivorPlagueEffect::Authority_OnHitByVomitProjectileAesthetic() {
}

void USurvivorPlagueEffect::Authority_OnHitByVomitProjectile(float sicknessToAdd) {
}

void USurvivorPlagueEffect::Authority_OnHitBySuperVomitProjectile() {
}


void USurvivorPlagueEffect::Authority_AddSickness(float sicknessToAdd) {
}

void USurvivorPlagueEffect::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USurvivorPlagueEffect, _sicknessAmount);
    DOREPLIFETIME(USurvivorPlagueEffect, _wasRecentlyHitByVomit);
    DOREPLIFETIME(USurvivorPlagueEffect, _debugMode);
}

USurvivorPlagueEffect::USurvivorPlagueEffect() {
    this->_sicknessAmount = 0.00f;
    this->_sicknessCap = 0.00f;
    this->_vomitSlowDuration = 0.00f;
    this->_vomitSlowAmount = 0.00f;
    this->_wasRecentlyHitByVomit = false;
    this->_debugMode = false;
}


#include "GassedStatusEffect.h"
#include "Net/UnrealNetwork.h"

class ABaseGasCloudProjectile;


void UGassedStatusEffect::SetRemainingDuration(const float value) {
}

void UGassedStatusEffect::SetRemainingAntidoteDuration(const float value) {
}




void UGassedStatusEffect::OnRep_TotalTimesEnteringToxicClouds() {
}

void UGassedStatusEffect::OnRep_IsInAntidoteCloud() {
}




bool UGassedStatusEffect::IsInCloud() const {
    return false;
}

bool UGassedStatusEffect::IsInAntidoteCloud() const {
    return false;
}

float UGassedStatusEffect::GetRemainingDuration() const {
    return 0.0f;
}

float UGassedStatusEffect::GetRemainingAntidoteDuration() const {
    return 0.0f;
}

float UGassedStatusEffect::GetCloudEffectDuration() const {
    return 0.0f;
}

float UGassedStatusEffect::GetAntidoteCloudEffectDuration() const {
    return 0.0f;
}

void UGassedStatusEffect::Authority_SetIsInCloud(const bool value) {
}

void UGassedStatusEffect::Authority_SetIsInAntidoteCloud(const bool value) {
}

void UGassedStatusEffect::Authority_RemoveOverlappingCloud(ABaseGasCloudProjectile* cloud) {
}

void UGassedStatusEffect::Authority_AddOverlappingCloud(ABaseGasCloudProjectile* cloud) {
}

void UGassedStatusEffect::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGassedStatusEffect, _isInCloud);
    DOREPLIFETIME(UGassedStatusEffect, _isInAntidoteCloud);
    DOREPLIFETIME(UGassedStatusEffect, _totalTimesEnteringToxicClouds);
}

UGassedStatusEffect::UGassedStatusEffect() {
    this->_isInCloud = false;
    this->_isInAntidoteCloud = false;
    this->_totalTimesEnteringToxicClouds = 0;
}


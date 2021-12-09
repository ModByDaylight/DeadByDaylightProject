#include "BlinkerComponent.h"

class UDBDTimerComponent;
class ADBDPlayer;

FVector UBlinkerComponent::UpdateTargetLocation(ADBDPlayer* player, float blinkDistance, const TArray<float>& scanPercentLocations) {
    return FVector{};
}

bool UBlinkerComponent::ShouldInterpolateIndicatorPosition() const {
    return false;
}

void UBlinkerComponent::SetChainedBlinkCount(int32 blinkCount) {
}

void UBlinkerComponent::SetBlinkerState(EBlinkerState blinkerState) {
}

FVector UBlinkerComponent::LocalAddRandomToTargetLocation(ADBDPlayer* player, FVector targetLocation, float distance) {
    return FVector{};
}

bool UBlinkerComponent::IsReady() const {
    return false;
}

void UBlinkerComponent::IncrementChainedBlinkCount() {
}

FVector UBlinkerComponent::GetInterpolatedIndicatorPosition(FVector blinkTarget, FVector indicatorPosition, float deltaTime) const {
    return FVector{};
}

float UBlinkerComponent::GetFatigueDuration(ADBDPlayer* player, bool attacked, int32 blinkCount) const {
    return 0.0f;
}

int32 UBlinkerComponent::GetChainedBlinkCount() const {
    return 0;
}

EBlinkerState UBlinkerComponent::GetBlinkerState() const {
    return EBlinkerState::VE_Ready;
}

UDBDTimerComponent* UBlinkerComponent::GetBlinkChainTimer() const {
    return NULL;
}

float UBlinkerComponent::GetAutomaticBlinkDelay(int32 chainBlinkCount) const {
    return 0.0f;
}

UBlinkerComponent::UBlinkerComponent() {
    this->_rayCastZOffet = 0.00f;
    this->_rayCastLength = 1000.00f;
    this->_minimumIndicatorVelocity = 460.00f;
    this->_IndicatorVelocityEasingFactor = 0.05f;
}


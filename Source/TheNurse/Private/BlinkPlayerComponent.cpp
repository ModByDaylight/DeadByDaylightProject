#include "BlinkPlayerComponent.h"

class ACharacter;

void UBlinkPlayerComponent::Server_StartBlink_Implementation(const FBlinkParams& params) {
}

void UBlinkPlayerComponent::Server_EndBlink_Implementation() {
}

void UBlinkPlayerComponent::Multicast_StartBlink_Implementation(const FBlinkParams& params) {
}

void UBlinkPlayerComponent::Multicast_EndBlink_Implementation() {
}

void UBlinkPlayerComponent::Local_OnMovementModeChanged(ACharacter* character, TEnumAsByte<EMovementMode> prevMovementMode, uint8 previousCustomMode) {
}

UBlinkPlayerComponent::UBlinkPlayerComponent() {
    this->_blinkFOVCurve = NULL;
}


#include "InterruptionDefinition.h"

class ADBDPlayer;
class UInteractionDefinition;
class AInteractable;

void UInterruptionDefinition::SetInterruptorSnapPoint(const FTransform& Point) {
}




bool UInterruptionDefinition::IsUsingMontageFollower() const {
    return false;
}

bool UInterruptionDefinition::IsUsingAttack() const {
    return false;
}

bool UInterruptionDefinition::IsInterruptionPossible_Implementation(const ADBDPlayer* interruptor, const ADBDPlayer* interruptee) const {
    return false;
}

bool UInterruptionDefinition::InteractionCheckHeightDelta(const ADBDPlayer* interruptor, const ADBDPlayer* interruptee) const {
    return false;
}

FRotator UInterruptionDefinition::GetInterruptionSnapPointRotationForInterruptor_Implementation(const ADBDPlayer* Interruptor, const ADBDPlayer* Interruptee) const {
    return FRotator{};
}

FVector UInterruptionDefinition::GetInterruptionSnapPointPositionForInterruptor_Implementation(const ADBDPlayer* Interruptor, const ADBDPlayer* Interruptee) const {
    return FVector{};
}

UInteractionDefinition* UInterruptionDefinition::GetInteractionDefinition() const {
    return NULL;
}

AInteractable* UInterruptionDefinition::GetInteractable() const {
    return NULL;
}

bool UInterruptionDefinition::CanInterruptWhileCarrying() const {
    return false;
}

UInterruptionDefinition::UInterruptionDefinition() {
    this->_usesWorldCoordinates = false;
    this->_snapInterruptor = true;
    this->_pickUpOnInterrupt = false;
    this->_canInterruptWhileCarrying = false;
    this->_useMontageFollower = false;
    this->_maxHeightDeltaBetweenCharacters = 50.00f;
}


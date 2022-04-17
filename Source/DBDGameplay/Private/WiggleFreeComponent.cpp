#include "WiggleFreeComponent.h"

class ADBDPlayer;
class AActor;

void UWiggleFreeComponent::Authority_OnWiggleEnd() {
}

void UWiggleFreeComponent::Authority_OnPlayerPickedUpEnd(ADBDPlayer* picker) {
}

void UWiggleFreeComponent::Authority_OnLevelReadyToPlay() {
}

void UWiggleFreeComponent::Authority_OnChargeableCompleteEvent(bool completed, const TArray<AActor*>& instigatorsForCompletion) {
}

UWiggleFreeComponent::UWiggleFreeComponent() {
    this->_killerWigglingFrom = NULL;
}


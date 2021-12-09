#include "HasPlayerReachedWiggleFillPercentCondition.h"
#include "Net/UnrealNetwork.h"

class UChargeableComponent;

void UHasPlayerReachedWiggleFillPercentCondition::OnRep_IsWigglePercentReached() {
}

void UHasPlayerReachedWiggleFillPercentCondition::Authority_OnOwnerWiggleChargePercentChanged(UChargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete) {
}

void UHasPlayerReachedWiggleFillPercentCondition::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UHasPlayerReachedWiggleFillPercentCondition, _isWigglePercentReached);
}

UHasPlayerReachedWiggleFillPercentCondition::UHasPlayerReachedWiggleFillPercentCondition() {
    this->_isWigglePercentReached = false;
}


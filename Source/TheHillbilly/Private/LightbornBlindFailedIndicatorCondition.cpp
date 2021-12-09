#include "LightbornBlindFailedIndicatorCondition.h"
#include "Net/UnrealNetwork.h"

void ULightbornBlindFailedIndicatorCondition::OnRep_ReplicatedIsTrue() {
}

void ULightbornBlindFailedIndicatorCondition::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ULightbornBlindFailedIndicatorCondition, _replicatedIsTrue);
}

ULightbornBlindFailedIndicatorCondition::ULightbornBlindFailedIndicatorCondition() {
    this->_conditionReevaluationTimerDurationAfterFailedBlind = 1.00f;
    this->_replicatedIsTrue = false;
}


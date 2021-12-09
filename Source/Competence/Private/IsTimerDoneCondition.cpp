#include "IsTimerDoneCondition.h"
#include "Net/UnrealNetwork.h"

class UTimerObject;

void UIsTimerDoneCondition::SetTimer(UTimerObject* timer) {
}

void UIsTimerDoneCondition::OnRep_Timer() {
}

void UIsTimerDoneCondition::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIsTimerDoneCondition, _timer);
}

UIsTimerDoneCondition::UIsTimerDoneCondition() {
    this->_timer = NULL;
}


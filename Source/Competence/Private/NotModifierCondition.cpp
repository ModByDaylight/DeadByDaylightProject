#include "NotModifierCondition.h"
#include "Net/UnrealNetwork.h"

void UNotModifierCondition::OnRep_Condition() {
}

void UNotModifierCondition::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UNotModifierCondition, _condition);
}

UNotModifierCondition::UNotModifierCondition() {
    this->_condition = NULL;
}


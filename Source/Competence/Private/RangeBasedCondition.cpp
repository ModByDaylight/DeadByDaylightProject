#include "RangeBasedCondition.h"
#include "Net/UnrealNetwork.h"

void URangeBasedCondition::OnRep_Range() {
}

void URangeBasedCondition::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URangeBasedCondition, _range);
}

URangeBasedCondition::URangeBasedCondition() {
    this->_range = 0.00f;
}


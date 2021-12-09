#include "BuiltToLast.h"
#include "Net/UnrealNetwork.h"


void UBuiltToLast::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBuiltToLast, _numberOfTimesPerkTriggered);
}

UBuiltToLast::UBuiltToLast() {
    this->_refillPercentage[0] = 0.00f;
    this->_refillPercentage[1] = 0.00f;
    this->_refillPercentage[2] = 0.00f;
    this->_hideDuration[0] = 0.00f;
    this->_hideDuration[1] = 0.00f;
    this->_hideDuration[2] = 0.00f;
    this->_numberOfTimesPerkTriggered = 0;
}


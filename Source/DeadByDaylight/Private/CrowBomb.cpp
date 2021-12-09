#include "CrowBomb.h"
#include "Net/UnrealNetwork.h"

void ACrowBomb::TriggerTakeOff(FVector triggerLocation) {
}

void ACrowBomb::TriggerLand() {
}

void ACrowBomb::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACrowBomb, _crows);
}

ACrowBomb::ACrowBomb() {
    this->_innerRadius = 0.00f;
    this->_outerRadius = 0.00f;
    this->_maxTakeoffDelay = 1.00f;
    this->_numCrows = 0;
    this->_crowCenterDistance = 0;
    this->_crowOuterDistance = 0;
    this->_eliminationSamples = 0;
    this->_eliminationStddev = 0.00f;
    this->_landed = true;
}


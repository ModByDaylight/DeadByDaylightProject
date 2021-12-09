#include "Distortion.h"
#include "Net/UnrealNetwork.h"

void UDistortion::OnRep_AuraBlockIsActive() {
}

bool UDistortion::AuraBlockCanBeActive() const {
    return false;
}

void UDistortion::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDistortion, _auraBlockIsActive);
}

UDistortion::UDistortion() {
    this->_activationDurations[0] = 0.00f;
    this->_activationDurations[1] = 0.00f;
    this->_activationDurations[2] = 0.00f;
    this->_auraBlockIsActive = false;
}


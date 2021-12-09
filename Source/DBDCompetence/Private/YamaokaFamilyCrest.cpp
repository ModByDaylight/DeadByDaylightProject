#include "YamaokaFamilyCrest.h"
#include "Net/UnrealNetwork.h"


void UYamaokaFamilyCrest::OnRep_AddonActivationCount() {
}

void UYamaokaFamilyCrest::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYamaokaFamilyCrest, _survivorsToReveal);
    DOREPLIFETIME(UYamaokaFamilyCrest, _addonActivationCount);
}

UYamaokaFamilyCrest::UYamaokaFamilyCrest() {
    this->_revealDuration = 0.00f;
    this->_revealRange = 0.00f;
    this->_addonActivationCount = 0;
}


#include "DesperateMeasures.h"
#include "Net/UnrealNetwork.h"

void UDesperateMeasures::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDesperateMeasures, _nbInjuredHookedOrDyingSurvivors);
}

UDesperateMeasures::UDesperateMeasures() {
    this->_healAndUnhookMultiplier[0] = 0.00f;
    this->_healAndUnhookMultiplier[1] = 0.00f;
    this->_healAndUnhookMultiplier[2] = 0.00f;
    this->_nbInjuredHookedOrDyingSurvivors = 0;
}


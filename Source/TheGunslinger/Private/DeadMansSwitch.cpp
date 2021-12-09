#include "DeadMansSwitch.h"
#include "Net/UnrealNetwork.h"

void UDeadMansSwitch::OnRep_BlockedGenerators() {
}

void UDeadMansSwitch::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDeadMansSwitch, _blockedGenerators);
}

UDeadMansSwitch::UDeadMansSwitch() {
    this->_activationDurationByLevels[0] = 0.00f;
    this->_activationDurationByLevels[1] = 0.00f;
    this->_activationDurationByLevels[2] = 0.00f;
    this->_anySurvivorLetGo = true;
}


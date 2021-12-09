#include "CorruptIntervention.h"
#include "Net/UnrealNetwork.h"

void UCorruptIntervention::Server_ActivatePerk_Implementation() {
}
bool UCorruptIntervention::Server_ActivatePerk_Validate() {
    return true;
}

void UCorruptIntervention::OnRep_BlockedGenerators() {
}

void UCorruptIntervention::Local_OnIntroCompleted() {
}

void UCorruptIntervention::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCorruptIntervention, _blockedGenerators);
}

UCorruptIntervention::UCorruptIntervention() {
    this->_blockedGeneratorCount[0] = 0;
    this->_blockedGeneratorCount[1] = 0;
    this->_blockedGeneratorCount[2] = 0;
    this->_generatorBlockDuration[0] = 0.00f;
    this->_generatorBlockDuration[1] = 0.00f;
    this->_generatorBlockDuration[2] = 0.00f;
}


#include "InfectiousFright.h"
#include "Net/UnrealNetwork.h"


void UInfectiousFright::OnRep_PerkActivationCount() {
}

void UInfectiousFright::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UInfectiousFright, _perkActivationCount);
    DOREPLIFETIME(UInfectiousFright, _revealedSurvivors);
}

UInfectiousFright::UInfectiousFright() {
    this->_revealPlayerInTerrorRadius = true;
    this->_perkActivationCount = 0;
    this->_targetSurvivor = NULL;
}


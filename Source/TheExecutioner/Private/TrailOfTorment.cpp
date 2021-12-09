#include "TrailOfTorment.h"
#include "Net/UnrealNetwork.h"

class AGenerator;

void UTrailOfTorment::OnRep_HighlightGenerator(AGenerator* _oldHighlightedGenerator) {
}

void UTrailOfTorment::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTrailOfTorment, _isPerkActivated);
    DOREPLIFETIME(UTrailOfTorment, _highlightedGenerator);
}

UTrailOfTorment::UTrailOfTorment() {
    this->_cooldownDuration[0] = 0.00f;
    this->_cooldownDuration[1] = 0.00f;
    this->_cooldownDuration[2] = 0.00f;
    this->_highlightPriority = 0;
    this->_isPerkActivated = false;
    this->_highlightedGenerator = NULL;
    this->_statusEffect = NULL;
}


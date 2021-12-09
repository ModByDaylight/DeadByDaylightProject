#include "Eruption.h"
#include "Net/UnrealNetwork.h"

class AGenerator;

void UEruption::OnRep_IsPerkEnabled() {
}

void UEruption::Multicast_TriggerPerk_Implementation(const TArray<AGenerator*>& explodingGenerators) {
}

void UEruption::Multicast_HighlightGenerator_Implementation(AGenerator* generator) {
}


float UEruption::GetScreamRevealLocationDuration() const {
    return 0.0f;
}



void UEruption::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UEruption, _isPerkEnabled);
}

UEruption::UEruption() {
    this->_isPerkEnabled = false;
    this->_generatorRegressPercentage[0] = 0.00f;
    this->_generatorRegressPercentage[1] = 0.00f;
    this->_generatorRegressPercentage[2] = 0.00f;
    this->_survivorImposedStatusEffectDuration[0] = 0.00f;
    this->_survivorImposedStatusEffectDuration[1] = 0.00f;
    this->_survivorImposedStatusEffectDuration[2] = 0.00f;
    this->_perkCooldownDuration[0] = 0.00f;
    this->_perkCooldownDuration[1] = 0.00f;
    this->_perkCooldownDuration[2] = 0.00f;
    this->_screamRevealLocationDuration = 0.00f;
}


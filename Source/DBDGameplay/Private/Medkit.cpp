#include "Medkit.h"
#include "AkComponent.h"
#include "ChargerComponent.h"

class ADBDPlayer;

void AMedkit::UseCharge(float seconds) {
}

void AMedkit::OnMedkitHealedCamper_Implementation(ADBDPlayer* healedPlayer) {
}

bool AMedkit::HasCharge() const {
    return false;
}

float AMedkit::GetChargeMultiplier() const {
    return 0.0f;
}

void AMedkit::Authority_OnChargeStateChange(const bool empty) {
}

void AMedkit::Authority_OnAnyOngoingInteractionChanged(const bool isInteracting) {
}

void AMedkit::Authority_ConsumeIfNotInteracting() {
}

AMedkit::AMedkit() {
    this->_akComponent = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_Audio_Medkit"));
    this->_charger = CreateDefaultSubobject<UChargerComponent>(TEXT("Charger"));
    this->_dustRingTemplate = NULL;
    this->_medkitGetAkEvent = NULL;
    this->_medkitDropAkEvent = NULL;
    this->_medkitBank = NULL;
    this->_healOtherChargeMultiplier = 2.00f;
}


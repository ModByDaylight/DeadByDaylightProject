#include "BloodOrb.h"
#include "Net/UnrealNetwork.h"
#include "BloodOrbFadeComponent.h"

class ADBDPlayer;



void ABloodOrb::OnRep_State(const EBloodOrbState oldState) {
}




ADBDPlayer* ABloodOrb::GetDroppingPlayer() const {
    return NULL;
}


void ABloodOrb::Authority_OnDropFinished() {
}

void ABloodOrb::Authority_DestroyBloodOrb() {
}

void ABloodOrb::Authority_Despawn() {
}

void ABloodOrb::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABloodOrb, _droppingPlayer);
    DOREPLIFETIME(ABloodOrb, _state);
}

ABloodOrb::ABloodOrb() {
    this->_absorbReference = NULL;
    this->_outlineComponent = NULL;
    this->_despawnDelay = 0.00f;
    this->_state = EBloodOrbState::Invalid;
    this->_fadeComponent = CreateDefaultSubobject<UBloodOrbFadeComponent>(TEXT("FadeComponent"));
}


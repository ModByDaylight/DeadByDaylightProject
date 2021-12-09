#include "DiscordancePerk.h"
#include "Net/UnrealNetwork.h"

class AGenerator;

void UDiscordancePerk::Multicast_AddLingeringGeneratorAura_Implementation(AGenerator* generator) {
}

void UDiscordancePerk::Multicast_AddGeneratorAura_Implementation(AGenerator* generator) {
}

void UDiscordancePerk::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDiscordancePerk, _isPerkConsideredActive);
}

UDiscordancePerk::UDiscordancePerk() {
    this->_effectRange[0] = 0.00f;
    this->_effectRange[1] = 0.00f;
    this->_effectRange[2] = 0.00f;
    this->_auraLingerDuration = 8.00f;
    this->_numSurvivorsRepairingToReveal = 2;
    this->_isPerkConsideredActive = false;
    this->_genratorToCheckNextFrame = NULL;
}


#include "KillerBlindingFXComponent.h"

class ADBDPlayer;

void UKillerBlindingFXComponent::Multicast_OnBlindedByPlayersCosmetic_Implementation(const TArray<ADBDPlayer*>& players) {
}

UKillerBlindingFXComponent::UKillerBlindingFXComponent() {
    this->_blindedSound = NULL;
}


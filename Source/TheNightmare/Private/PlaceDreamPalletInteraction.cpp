#include "PlaceDreamPalletInteraction.h"
#include "Net/UnrealNetwork.h"

class ASlasherPlayer;
class APalletTracker;


void UPlaceDreamPalletInteraction::InitializeTunableValues(ASlasherPlayer* killer) {
}

APalletTracker* UPlaceDreamPalletInteraction::GetTargetedPallet() const {
    return NULL;
}

bool UPlaceDreamPalletInteraction::CanSpawnDreamPalletAtTracker(APalletTracker* tracker) const {
    return false;
}

void UPlaceDreamPalletInteraction::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPlaceDreamPalletInteraction, _palletTrackers);
}

UPlaceDreamPalletInteraction::UPlaceDreamPalletInteraction() {
    this->_closestTracker = NULL;
}


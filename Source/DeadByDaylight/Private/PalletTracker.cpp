#include "PalletTracker.h"
#include "Net/UnrealNetwork.h"
#include "Components/SceneComponent.h"

class ASlasherPlayer;


void APalletTracker::InitializeTunableValues(ASlasherPlayer* slasher) {
}


bool APalletTracker::CanSpawnDreamPalletAtLocation() const {
    return false;
}

void APalletTracker::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalletTracker, _procedurallySpawnedPallet);
    DOREPLIFETIME(APalletTracker, _dreamPallet);
}

APalletTracker::APalletTracker() {
    this->_procedurallySpawnedPallet = NULL;
    this->_dreamPallet = NULL;
    this->_indicatorLocation = CreateDefaultSubobject<USceneComponent>(TEXT("IndicatorLocation"));
}


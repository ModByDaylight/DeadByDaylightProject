#include "AtlantaDisplayStand.h"
#include "Components/SceneComponent.h"

AAtlantaDisplayStand::AAtlantaDisplayStand() {
    this->StandPosition = EAtlantaDisplayStandPosition::Forefront;
    this->SurvivorPositionMarker = CreateDefaultSubobject<USceneComponent>(TEXT("SurvivorPositionMarker"));
    this->KillerPositionMarker = CreateDefaultSubobject<USceneComponent>(TEXT("KillerPositionMarker"));
}


#include "Tile.h"
#include "Net/UnrealNetwork.h"


void ATile::OnRep_Initialized(bool oldValue) {
}



void ATile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATile, _initialized);
}

ATile::ATile() {
    this->RerunConstructionScript = false;
    this->MinimumSpacing = 0;
    this->MaximumSpacing = 0;
    this->DiagonalSpacing = false;
    this->TypeSpacing = false;
    this->MaximumCount = 0;
    this->Type = ETileType::None;
    this->Density = EDensity::Unspecified;
    this->Path = EPathType::None;
    this->Number = 0;
    this->PlaceHolder = false;
    this->SpawnPriorityTier = 10;
    this->Weight = 1.00f;
    this->QuadrantSpawnType = EQuadrantSpawnType::None;
    this->BasementType = EBasementType::None;
    this->_initialized = false;
}


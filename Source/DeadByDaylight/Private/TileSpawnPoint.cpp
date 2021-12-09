#include "TileSpawnPoint.h"
#include "Net/UnrealNetwork.h"

class AActor;

void UTileSpawnPoint::SetActivated(bool activated) {
}

void UTileSpawnPoint::OnRep_SpawnObject() {
}

bool UTileSpawnPoint::IsActivated() const {
    return false;
}

AActor* UTileSpawnPoint::GetSpawnedObject() const {
    return NULL;
}

void UTileSpawnPoint::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTileSpawnPoint, _spawnedObject);
}

UTileSpawnPoint::UTileSpawnPoint() {
    this->TileSpawnPointType = ETileSpawnPointType::Unspecified;
    this->Weight = 1.00f;
    this->_spawnedObject = NULL;
    this->_spawnPriorityTier = 1;
    this->_weightInfluenceable = true;
    this->_weightInfluencer = true;
    this->_activated = false;
}


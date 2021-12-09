#include "DecalSpawner.h"

class USpawnerStrategy;

USpawnerStrategy* UDecalSpawner::GetSpawnerStrategy() {
    return NULL;
}

UDecalSpawner::UDecalSpawner() {
    this->_decalCollection = NULL;
    this->_spawnerStrategy = NULL;
}


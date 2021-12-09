#include "LevelParadise.h"

void ALevelParadise::ParadiseEntered(const FParadiseData& playerData) {
}

void ALevelParadise::OnInterpolationDone() {
}


ALevelParadise::ALevelParadise() {
    this->LoopStartDistance = 9600.00f;
    this->LoopDistance = 3200.00f;
    this->MainPlayerSpawnPoint = NULL;
    this->ParadiseViewTarget = NULL;
    this->_spawnedMainPawn = NULL;
    this->_runnerComponent = NULL;
}


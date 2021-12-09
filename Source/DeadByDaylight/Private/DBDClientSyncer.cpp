#include "DBDClientSyncer.h"

class UPaperTileMap;

void ADBDClientSyncer::Multicast_SyncSeed_Implementation(int32 seed, UPaperTileMap* tileMap, int32 generationPlayerCount, const FString& premadeMap) {
}

void ADBDClientSyncer::Multicast_SyncFinalLocallySpawnCount_Implementation(int16 numLocal) {
}

void ADBDClientSyncer::Multicast_SyncActorToSpawnLocally_Implementation(const TArray<FSpawnInfo>& spawnInfos, int16 startIndex) {
}

ADBDClientSyncer::ADBDClientSyncer() {
    this->_tileMap = NULL;
}


#pragma once
#include "CoreMinimal.h"
#include "ELevelBuildingState.generated.h"

UENUM()
enum class ELevelBuildingState {
    NotInitialized,
    WaitingForInitialSync,
    SyncSeeds,
    GetAvailableItems,
    PendingGettingItems,
    GettingLevelsDone,
    PendingPremadeMapStreaming,
    GetThemedTiles,
    PendingGettingTiles,
    SpawnRequiredTiles,
    SpawningLevelTiles,
    SpawnInterTileElements,
    PendingInterTileElementsSpawning,
    SpawningActors,
    SpawningMultiPassActors,
    StallingForRemotes,
    BuildingDone,
    BuildingStateCount,
};


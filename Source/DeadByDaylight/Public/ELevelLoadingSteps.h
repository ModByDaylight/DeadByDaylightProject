#pragma once
#include "CoreMinimal.h"
#include "ELevelLoadingSteps.generated.h"

UENUM()
enum class ELevelLoadingSteps {
    Invalid,
    WaitingForPlayersToBeSpawned,
    WaitingForAIPawnToBeSpawned,
    WaitingForAssetPreloader,
    WaitingForLoadoutAndTheme,
    WaitingForPIAToBeSpawnedAndInitialized,
    WaitingForNavmeshComputationToStart,
    WaitingForNavmeshComputationToFinish,
    SetGameLoadedAndReadyToPlay,
    WaitingForIntroToBeDone,
    LoadingCompleted,
};


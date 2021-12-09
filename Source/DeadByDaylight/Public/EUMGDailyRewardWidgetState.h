#pragma once
#include "CoreMinimal.h"
#include "EUMGDailyRewardWidgetState.generated.h"

UENUM(BlueprintType)
enum class EUMGDailyRewardWidgetState : uint8 {
    Unknown,
    Locked,
    ReadyToCollect,
    NewlyCollected,
    Collected,
    MysteryLocked,
    MysteryReadyToDiscover,
    MysteryNewlyDiscovered,
};


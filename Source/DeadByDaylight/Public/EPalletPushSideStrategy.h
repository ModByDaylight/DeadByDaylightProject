#pragma once
#include "CoreMinimal.h"
#include "EPalletPushSideStrategy.generated.h"

UENUM(BlueprintType)
enum class EPalletPushSideStrategy : uint8 {
    PushToClosestPalletSide,
    PushOppositeToPlayerExecutingPulldown,
};


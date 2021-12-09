#pragma once
#include "CoreMinimal.h"
#include "ESleepingUIState.generated.h"

UENUM(BlueprintType)
enum class ESleepingUIState : uint8 {
    Off,
    FallingAsleep,
    Asleep,
};


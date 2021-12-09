#pragma once
#include "CoreMinimal.h"
#include "EPlayerStatus.generated.h"

UENUM(BlueprintType)
enum class EPlayerStatus : uint8 {
    Default,
    Hook,
    Trap,
    Dead,
    Escaped,
    Injured,
    Crawling,
    Sacrificed,
    Disconnected,
    InDeathBed,
};


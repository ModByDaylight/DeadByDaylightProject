#pragma once
#include "CoreMinimal.h"
#include "ESpawnerStrategyType.generated.h"

UENUM()
enum class ESpawnerStrategyType : uint8 {
    None,
    NoAccumulation,
    LimitAccumulation,
};


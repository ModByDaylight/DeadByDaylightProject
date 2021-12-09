#pragma once
#include "CoreMinimal.h"
#include "EAfflictionLevel.generated.h"

UENUM(BlueprintType)
enum class EAfflictionLevel : uint8 {
    Off,
    Level1,
    Level2,
    Level3,
};


#pragma once
#include "CoreMinimal.h"
#include "EItemAvailability.generated.h"

UENUM(BlueprintType)
enum class EItemAvailability : uint8 {
    Available,
    Disabled,
    Retired,
};


#pragma once
#include "CoreMinimal.h"
#include "ETotemState.generated.h"

UENUM(BlueprintType)
enum class ETotemState : uint8 {
    Cleansed,
    Dull,
    Hex,
    Boon,
};


#pragma once
#include "CoreMinimal.h"
#include "EAllowedPlayerType.generated.h"

UENUM(BlueprintType)
enum class EAllowedPlayerType : uint8 {
    All,
    KillerOnly,
    SurvivorOnly,
};


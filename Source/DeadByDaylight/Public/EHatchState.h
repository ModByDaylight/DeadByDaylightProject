#pragma once
#include "CoreMinimal.h"
#include "EHatchState.generated.h"

UENUM(BlueprintType)
enum class EHatchState : uint8 {
    Hidden,
    DefaultClose,
    Opened,
    ForcedClose,
};


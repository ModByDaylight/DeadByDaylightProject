#pragma once
#include "CoreMinimal.h"
#include "ETileVariation.generated.h"

UENUM(BlueprintType)
enum class ETileVariation : uint8 {
    None,
    BlueTag,
    PinkTag,
    YellowTag,
    GreenTag,
    Empty,
};


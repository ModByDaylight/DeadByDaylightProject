#pragma once
#include "CoreMinimal.h"
#include "EAnalogCursorStickiness.generated.h"

UENUM(BlueprintType)
enum class EAnalogCursorStickiness : uint8 {
    None,
    ButtonSmall,
    ButtonMedium,
    ButtonLarge,
    Bloodweb,
    Slow,
};


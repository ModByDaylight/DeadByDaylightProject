#pragma once
#include "CoreMinimal.h"
#include "ETooltipType.generated.h"

UENUM()
enum class ETooltipType : uint8 {
    None,
    Character,
    CurrencyProgression,
    Customization,
};


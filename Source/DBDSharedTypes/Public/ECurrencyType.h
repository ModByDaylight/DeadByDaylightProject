#pragma once
#include "CoreMinimal.h"
#include "ECurrencyType.generated.h"

UENUM(BlueprintType)
enum class ECurrencyType : uint8 {
    None,
    BloodPoints,
    FearTokens,
    Cells,
    HalloweenCoins,
    LunarNewYearCoins,
    HalloweenEventCurrency,
};


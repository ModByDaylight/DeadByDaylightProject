#pragma once
#include "CoreMinimal.h"
#include "EEmblemQuality.generated.h"

UENUM(BlueprintType)
enum class EEmblemQuality : uint8 {
    None,
    Bronze,
    Silver,
    Gold,
    Iridescent,
    Count,
};


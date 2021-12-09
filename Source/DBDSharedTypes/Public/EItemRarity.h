#pragma once
#include "CoreMinimal.h"
#include "EItemRarity.generated.h"

UENUM(BlueprintType)
enum class EItemRarity : uint8 {
    Common,
    Uncommon,
    Rare,
    VeryRare,
    UltraRare,
    Artifact,
    Spectral,
    Teachable,
    SpecialEvent,
    Legendary,
    Epic,
    SuperEpic,
    UltraEpic,
    Count,
    None,
};


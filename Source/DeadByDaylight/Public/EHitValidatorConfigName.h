#pragma once
#include "CoreMinimal.h"
#include "EHitValidatorConfigName.generated.h"

UENUM(BlueprintType)
enum class EHitValidatorConfigName : uint8 {
    Default,
    Hatchet,
    Bomb,
    Harpoon,
    Oni,
    Whip,
    DefaultProjectile,
};


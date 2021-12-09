#pragma once
#include "CoreMinimal.h"
#include "ECustomizationCategory.generated.h"

UENUM(BlueprintType)
enum class ECustomizationCategory : uint8 {
    None,
    SurvivorHead,
    SurvivorTorso,
    SurvivorLegs,
    KillerHead,
    KillerBody,
    KillerWeapon,
    Outfits,
    Charm,
};


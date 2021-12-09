#pragma once
#include "CoreMinimal.h"
#include "ELoadoutSlot.generated.h"

UENUM(BlueprintType)
enum class ELoadoutSlot : uint8 {
    SKIN,
    ITEM_POWER,
    ADD_ON_1,
    ADD_ON_2,
    PERK_1,
    PERK_2,
    PERK_3,
    PERK_4,
    FAVOR,
};


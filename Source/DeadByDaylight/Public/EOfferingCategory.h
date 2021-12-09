#pragma once
#include "CoreMinimal.h"
#include "EOfferingCategory.generated.h"

UENUM(BlueprintType)
enum class EOfferingCategory : uint8 {
    None,
    Bloodpoints,
    Mapmods,
    Realms,
    Shrouds,
    Wards,
    CharacterXP,
    Luck,
    Moris,
};


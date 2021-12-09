#pragma once
#include "CoreMinimal.h"
#include "EOfferingType.generated.h"

UENUM(BlueprintType)
enum class EOfferingType : uint8 {
    None,
    Atmosphere,
    Lighting,
    Points,
    Zone,
    Position,
    Chest,
    Hook,
    Protection,
    Hatch,
    Odds,
    Killing,
    World,
    Luck,
    Killer,
    ProceduralGeneration,
    CharacterXP,
    Count,
};


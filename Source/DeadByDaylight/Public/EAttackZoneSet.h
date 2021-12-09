#pragma once
#include "CoreMinimal.h"
#include "EAttackZoneSet.generated.h"

UENUM()
enum class EAttackZoneSet : uint8 {
    VE_OriginalZones,
    VE_WedgeZones,
    VE_MAX UMETA(Hidden),
};


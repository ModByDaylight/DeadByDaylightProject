#pragma once
#include "CoreMinimal.h"
#include "ETrailType.generated.h"

UENUM()
enum class ETrailType : uint8 {
    NormalTrail,
    RestrictionTrail,
    None,
};


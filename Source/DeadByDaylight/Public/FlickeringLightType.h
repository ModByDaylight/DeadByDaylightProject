#pragma once
#include "CoreMinimal.h"
#include "FlickeringLightType.generated.h"

UENUM(BlueprintType)
enum class FlickeringLightType : uint8 {
    Point,
    Rect,
    Spot,
};


#pragma once
#include "CoreMinimal.h"
#include "ETextBannerPosition.generated.h"

UENUM(BlueprintType)
enum class ETextBannerPosition : uint8 {
    TopLeft,
    MiddleLeft,
    BottomLeft,
    MiddleRight,
    BottomRight,
    TopCenter,
    MiddleCenter,
    BottomCenter,
};


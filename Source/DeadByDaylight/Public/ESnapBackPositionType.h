#pragma once
#include "CoreMinimal.h"
#include "ESnapBackPositionType.generated.h"

UENUM(BlueprintType)
enum class ESnapBackPositionType : uint8 {
    SnapBackToInitialPosition,
    SnapBackToOffsetPositionFromSnap,
};


#pragma once
#include "CoreMinimal.h"
#include "EAnalogCursorDataType.generated.h"

UENUM(BlueprintType)
enum class EAnalogCursorDataType : uint8 {
    MaxSpeedDefault,
    MaxSpeedDefaultSlow,
    MaxSpeedStickyDefault,
    MaxSpeedStickySlow,
    MaxSpeedStickyButtonMedium,
    MaxSpeedStickyButtonLarge,
    MaxSpeedDefaultBloodweb,
    MaxSpeedStickyBloodweb,
    CustomAcceleration,
    DeadZone,
    HandheldSpeedBoostFactor,
};


#pragma once
#include "CoreMinimal.h"
#include "EHudScreenIndicatorType.generated.h"

UENUM(BlueprintType)
enum class EHudScreenIndicatorType : uint8 {
    None,
    LoudNoise,
    StealthBroken,
    Objective,
};


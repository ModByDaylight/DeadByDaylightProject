#pragma once
#include "CoreMinimal.h"
#include "EAIThrowPredictionModes.generated.h"

UENUM()
enum class EAIThrowPredictionModes : uint8 {
    FindBestThrowPowerRatio,
    FullThrowPowerRatio,
};


#pragma once
#include "CoreMinimal.h"
#include "EManualZoomType.generated.h"

UENUM()
enum class EManualZoomType {
    None,
    TargetZoomValue,
    CurveFloatProgression,
};


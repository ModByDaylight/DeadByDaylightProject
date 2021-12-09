#pragma once
#include "CoreMinimal.h"
#include "EDPIScaleCurveRatio.generated.h"

UENUM(BlueprintType)
enum class EDPIScaleCurveRatio : uint8 {
    Default,
    SmallerEqual4_3,
    Mobile,
};


#pragma once
#include "CoreMinimal.h"
#include "EMovementCurveType.generated.h"

UENUM()
enum class EMovementCurveType : uint8 {
    AdditiveSpeedCurve,
    MultiplicativeSpeedCurve,
};


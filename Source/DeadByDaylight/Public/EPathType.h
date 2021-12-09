#pragma once
#include "CoreMinimal.h"
#include "EPathType.generated.h"

UENUM()
enum class EPathType : uint8 {
    None,
    Straight,
    DeadEnd,
    Corner,
    Crossroads,
    TJunction,
    OrientationOnly,
    Unspecified,
    OrientedCrossroads,
};


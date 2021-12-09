#pragma once
#include "CoreMinimal.h"
#include "EComparisonOperation.generated.h"

UENUM()
enum class EComparisonOperation : uint8 {
    EqualTo,
    NotEqualTo,
    GreaterThan,
    GreaterThanOrEqualTo,
    LesserThan,
    LesserThanOrEqualTo,
};


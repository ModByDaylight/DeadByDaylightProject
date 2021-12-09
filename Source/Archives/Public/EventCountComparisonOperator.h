#pragma once
#include "CoreMinimal.h"
#include "EventCountComparisonOperator.generated.h"

UENUM()
enum class EventCountComparisonOperator : uint8 {
    EqualTo,
    GreaterThan,
    GreaterThanEqualTo,
    LessThan,
    LessThanEqualTo,
};


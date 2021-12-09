#pragma once
#include "CoreMinimal.h"
#include "EBloodwebNodeGateTypes.generated.h"

UENUM()
enum class EBloodwebNodeGateTypes : uint8 {
    RequiredRank,
    RequiredItem,
    Count,
};


#pragma once
#include "CoreMinimal.h"
#include "EKillerSoundComparisonType.generated.h"

UENUM()
enum class EKillerSoundComparisonType : uint8 {
    Equal,
    IsGreaterThan,
    IsLesserThan,
};


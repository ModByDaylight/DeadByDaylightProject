#pragma once
#include "CoreMinimal.h"
#include "ESicknessLevel.generated.h"

UENUM(BlueprintType)
enum class ESicknessLevel : uint8 {
    Off,
    InProgress,
    Full,
};


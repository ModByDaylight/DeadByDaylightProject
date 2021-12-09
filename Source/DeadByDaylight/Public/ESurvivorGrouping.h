#pragma once
#include "CoreMinimal.h"
#include "ESurvivorGrouping.generated.h"

UENUM(BlueprintType)
enum class ESurvivorGrouping : uint8 {
    Invalid,
    Separated,
    Grouped2_2,
    Grouped3_1,
    Grouped4_0,
};


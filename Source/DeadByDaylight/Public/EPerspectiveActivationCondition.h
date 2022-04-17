#pragma once
#include "CoreMinimal.h"
#include "EPerspectiveActivationCondition.generated.h"

UENUM(BlueprintType)
enum class EPerspectiveActivationCondition : uint8 {
    LocallyControlled,
    LocallyObserved,
    NotLocallyObserved,
};


#pragma once
#include "CoreMinimal.h"
#include "EOfferingCombinationResult.generated.h"

UENUM()
enum class EOfferingCombinationResult {
    None,
    Stacked,
    CoConsummed,
    Overruling,
    Cancelled,
};


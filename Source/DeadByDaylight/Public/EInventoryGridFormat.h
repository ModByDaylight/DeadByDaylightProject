#pragma once
#include "CoreMinimal.h"
#include "EInventoryGridFormat.generated.h"

UENUM(BlueprintType)
enum class EInventoryGridFormat : uint8 {
    DEFAULT,
    DIAMOND,
    HONEYCOMB,
};


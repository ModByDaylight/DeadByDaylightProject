#pragma once
#include "CoreMinimal.h"
#include "AkMultiPositionType.generated.h"

UENUM()
enum class AkMultiPositionType : uint8 {
    SingleSource,
    MultiSources,
    MultiDirections,
};


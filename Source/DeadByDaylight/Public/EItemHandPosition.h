#pragma once
#include "CoreMinimal.h"
#include "EItemHandPosition.generated.h"

UENUM(BlueprintType)
enum class EItemHandPosition : uint8 {
    None,
    HandleItem,
    AimItem,
    SmallItem,
    FirecrackerItem,
    VaccineItem,
    FragileObjectItem,
};


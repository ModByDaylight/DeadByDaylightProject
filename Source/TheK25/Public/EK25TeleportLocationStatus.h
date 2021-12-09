#pragma once
#include "CoreMinimal.h"
#include "EK25TeleportLocationStatus.generated.h"

UENUM()
enum class EK25TeleportLocationStatus : uint8 {
    Invalid,
    PassableLocation,
    PerfectLocation,
};


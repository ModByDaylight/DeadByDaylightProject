#pragma once
#include "CoreMinimal.h"
#include "ESoftBanReason.generated.h"

UENUM()
enum class ESoftBanReason {
    Invalid = -0x1,
    Harassment,
    Griefing,
    Exploits,
    Unsportsmanlike,
    Count,
};


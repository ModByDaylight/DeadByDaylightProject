#pragma once
#include "CoreMinimal.h"
#include "EClaimResponseCodes.generated.h"

UENUM()
enum class EClaimResponseCodes {
    Claimed,
    CalendarNotFound,
    RewardNotAvailable,
    RewardNotSupported,
};


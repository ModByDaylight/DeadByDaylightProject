#pragma once
#include "CoreMinimal.h"
#include "ESpecialEventStatus.generated.h"

UENUM()
enum class ESpecialEventStatus : uint8 {
    Inactive,
    ActiveMain,
    ActivePost,
};


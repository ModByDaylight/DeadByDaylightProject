#pragma once
#include "CoreMinimal.h"
#include "EChargeableInteractionBarType.generated.h"

UENUM(BlueprintType)
enum class EChargeableInteractionBarType : uint8 {
    VE_Normal,
    VE_ProgressPips,
    VE_MAX UMETA(Hidden),
};


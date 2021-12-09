#pragma once
#include "CoreMinimal.h"
#include "EAttackSubstate.generated.h"

UENUM(BlueprintType)
enum class EAttackSubstate : uint8 {
    VE_None,
    VE_Open,
    VE_Hitting,
    VE_HitSucceed,
    VE_HitMiss,
    VE_HitObstructed,
    VE_Done,
    VE_MAX UMETA(Hidden),
};


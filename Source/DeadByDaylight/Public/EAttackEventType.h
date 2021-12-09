#pragma once
#include "CoreMinimal.h"
#include "EAttackEventType.generated.h"

UENUM(BlueprintType)
enum class EAttackEventType : uint8 {
    VE_None,
    VE_BasicAttackAttempt,
    VE_BasicAttackHit,
    VE_SpecialAttackAttempt,
    VE_SpecialAttackHit,
    VE_MAX UMETA(Hidden),
};


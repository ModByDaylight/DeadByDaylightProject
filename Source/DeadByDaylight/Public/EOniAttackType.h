#pragma once
#include "CoreMinimal.h"
#include "EOniAttackType.generated.h"

UENUM(BlueprintType)
enum class EOniAttackType : uint8 {
    VE_NotDemonMode,
    VE_DemonBasicAttack,
    VE_DemonPowerAttack,
    VE_DemonDashAttack,
    VE_MAX UMETA(Hidden),
};


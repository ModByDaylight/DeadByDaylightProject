#pragma once
#include "CoreMinimal.h"
#include "EDetectionZone.generated.h"

UENUM()
enum class EDetectionZone : uint8 {
    VE_None,
    VE_Slash,
    VE_Pounce,
    VE_Chainsaw,
    VE_Obstructed,
    VE_Interruption,
    VE_ChainsawLockExtended,
    VE_Damage,
    VE_ChainsawObstruction,
    VE_Blink,
    VE_ChainsawDamageExtended,
    VE_Stalker,
    VE_Lunge,
    VE_PowerAttack,
    VE_Max,
    VE_MAX UMETA(Hidden),
};


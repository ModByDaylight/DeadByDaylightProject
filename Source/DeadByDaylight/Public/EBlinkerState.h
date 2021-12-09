#pragma once
#include "CoreMinimal.h"
#include "EBlinkerState.generated.h"

UENUM()
enum class EBlinkerState : uint8 {
    VE_Ready,
    VE_ChainBlink,
    VE_AttackBlink,
    VE_CooldownRequested,
    VE_Cooldown,
    VE_MAX UMETA(Hidden),
};


#pragma once
#include "CoreMinimal.h"
#include "EAttackType.generated.h"

UENUM(BlueprintType)
enum class EAttackType : uint8 {
    VE_None,
    VE_Slash,
    VE_Pounce,
    VE_Chainsaw,
    VE_Blink,
    VE_LFChainsaw,
    VE_Ambush,
    VE_Frenzy,
    VE_GhostCrouch,
    VE_QatarDash,
    VE_OniBasicAttack,
    VE_OniDemonBasicAttack,
    VE_OniDemonPowerAttack,
    VE_OniDemonDashAttack,
    VE_ExecutionerTormentAttack,
    VE_BlightDash,
    VE_TwinJump,
    VE_K24WhipAttack,
    VE_MAX UMETA(Hidden),
};


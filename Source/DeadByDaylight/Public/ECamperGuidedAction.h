#pragma once
#include "CoreMinimal.h"
#include "ECamperGuidedAction.generated.h"

UENUM(BlueprintType)
enum class ECamperGuidedAction : uint8 {
    VE_None,
    VE_PrepBeingKilled,
    VE_BeingKilled,
    VE_PrepGuidedAction,
    VE_BeingHelpedOffHookFront,
    VE_BeingHelpedOffHookBack,
    VE_BeingPickedUp,
    VE_BeingPutDown,
    VE_BeingCarried,
    VE_BeingPutOnHook,
    VE_BeingHealed,
    VE_BeingPulledFromCloset,
    VE_BeingHelpedFromTrap,
    VE_AttachReverseBearTrap,
    VE_BeingMended,
    VE_BeingInjectedWithSerum,
    VE_MAX UMETA(Hidden),
};


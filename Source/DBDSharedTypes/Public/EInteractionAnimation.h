#pragma once
#include "CoreMinimal.h"
#include "EInteractionAnimation.generated.h"

UENUM(BlueprintType)
enum class EInteractionAnimation : uint8 {
    VE_None,
    VE_Generator,
    VE_PullDownLeft,
    VE_PullDownRight,
    VE_Hiding,
    VE_SearchCloset,
    VE_HealingOther,
    VE_OpenEscape,
    VE_StruggleFree,
    VE_HealOther,
    VE_HealSelf,
    VE_PickedUp,
    VE_Unused01,
    VE_Dropped,
    VE_Unused02,
    VE_BeingHooked,
    VE_Sabotage,
    VE_ChargeBlink,
    VE_ThrowFirecracker,
    VE_WakeUpOther,
    VE_RemoveReverseBearTrap,
    VE_DeadHard,
    VE_DestroyPortal,
    VE_OniDash,
    VE_PickUpAnniversaryCrown,
    VE_InteractWithGlyph,
    VE_OpenChest,
    VE_MAX UMETA(Hidden),
};


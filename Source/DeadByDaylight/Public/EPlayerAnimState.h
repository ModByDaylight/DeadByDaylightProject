#pragma once
#include "CoreMinimal.h"
#include "EPlayerAnimState.generated.h"

UENUM()
enum class EPlayerAnimState {
    VE_Default,
    VE_Injured,
    VE_InjuredCrouch,
    VE_Crouch,
    VE_MAX UMETA(Hidden),
};


#pragma once
#include "CoreMinimal.h"
#include "ECamperImmobilizeState.generated.h"

UENUM()
enum class ECamperImmobilizeState : uint8 {
    VE_None,
    VE_Hooked,
    VE_Trapped,
    VE_Hiding,
    VE_Dead,
    VE_InDeathBed,
    VE_MAX UMETA(Hidden),
};


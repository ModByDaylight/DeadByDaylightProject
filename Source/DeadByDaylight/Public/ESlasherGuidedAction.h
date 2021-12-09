#pragma once
#include "CoreMinimal.h"
#include "ESlasherGuidedAction.generated.h"

UENUM()
enum class ESlasherGuidedAction : uint8 {
    VE_None,
    VE_Hooking,
    VE_PickingUp,
    VE_PuttingDown,
    VE_MAX UMETA(Hidden),
};


#pragma once
#include "CoreMinimal.h"
#include "ECamperDamageState.generated.h"

UENUM()
enum class ECamperDamageState : uint8 {
    VE_Healthy,
    VE_Injured,
    VE_KO,
    VE_Dead,
    VE_MAX UMETA(Hidden),
};


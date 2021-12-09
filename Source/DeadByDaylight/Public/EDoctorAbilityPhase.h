#pragma once
#include "CoreMinimal.h"
#include "EDoctorAbilityPhase.generated.h"

UENUM(BlueprintType)
enum class EDoctorAbilityPhase : uint8 {
    VE_Charging,
    VE_Firing,
    VE_None,
    VE_MAX UMETA(Hidden),
};


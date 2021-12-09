#pragma once
#include "CoreMinimal.h"
#include "EDoctorAbilityType.generated.h"

UENUM(BlueprintType)
enum class EDoctorAbilityType : uint8 {
    VE_ShockTherapy,
    VE_StaticBlast,
    VE_None,
    VE_MAX UMETA(Hidden),
};


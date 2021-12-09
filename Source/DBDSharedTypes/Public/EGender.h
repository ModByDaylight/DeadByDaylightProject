#pragma once
#include "CoreMinimal.h"
#include "EGender.generated.h"

UENUM(BlueprintType)
enum class EGender : uint8 {
    VE_Male,
    VE_Female,
    VE_Multiple,
    VE_NotHuman,
    VE_Undefined,
    VE_MAX UMETA(Hidden),
};


#pragma once
#include "CoreMinimal.h"
#include "EAttackSuccess.generated.h"

UENUM()
enum class EAttackSuccess {
    VE_None,
    VE_Success,
    VE_Failure,
    VE_Obstructed,
    VE_MAX UMETA(Hidden),
};


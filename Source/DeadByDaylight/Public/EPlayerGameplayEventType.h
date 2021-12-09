#pragma once
#include "CoreMinimal.h"
#include "EPlayerGameplayEventType.generated.h"

UENUM()
enum class EPlayerGameplayEventType {
    VE_UnhookedOther,
    VE_UntrappedOther,
    VE_HealedOther,
    VE_MAX UMETA(Hidden),
};


#pragma once
#include "CoreMinimal.h"
#include "EPlayerTeam.generated.h"

UENUM(BlueprintType)
enum class EPlayerTeam : uint8 {
    VE_None,
    VE_Killer,
    VE_Survivor,
    VE_MAX UMETA(Hidden),
};


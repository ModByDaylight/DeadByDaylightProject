#pragma once
#include "CoreMinimal.h"
#include "ECharacterStance.generated.h"

UENUM(BlueprintType)
enum class ECharacterStance : uint8 {
    VE_Stand,
    VE_Crouch,
    VE_Crawl,
    VE_MAX UMETA(Hidden),
};


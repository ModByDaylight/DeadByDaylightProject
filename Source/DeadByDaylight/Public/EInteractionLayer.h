#pragma once
#include "CoreMinimal.h"
#include "EInteractionLayer.generated.h"

UENUM(BlueprintType)
enum class EInteractionLayer : uint8 {
    VE_Camper,
    VE_Slasher,
    VE_MAX UMETA(Hidden),
};


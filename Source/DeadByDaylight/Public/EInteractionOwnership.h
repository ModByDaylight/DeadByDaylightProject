#pragma once
#include "CoreMinimal.h"
#include "EInteractionOwnership.generated.h"

UENUM(BlueprintType)
enum class EInteractionOwnership : uint8 {
    AnyCanUse,
    OnlyOwnerCanUse,
    OwnerCannotUse,
};


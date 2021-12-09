#pragma once
#include "CoreMinimal.h"
#include "ESnapBackType.generated.h"

UENUM(BlueprintType)
enum class ESnapBackType : uint8 {
    None,
    Always,
    OnInteractionCancelledOnly,
    OnInteractionEndOnly,
    OnSurvivorDownedOnly,
};


#pragma once
#include "CoreMinimal.h"
#include "EExternalEffectSource.generated.h"

UENUM(BlueprintType)
enum class EExternalEffectSource : uint8 {
    None,
    Perk,
    Addon,
    Power,
};


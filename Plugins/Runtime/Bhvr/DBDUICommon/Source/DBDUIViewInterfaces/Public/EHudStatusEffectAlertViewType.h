#pragma once
#include "CoreMinimal.h"
#include "EHudStatusEffectAlertViewType.generated.h"

UENUM(BlueprintType)
enum class EHudStatusEffectAlertViewType : uint8 {
    Unhandled,
    Perk,
    Item,
    Addon,
};


#pragma once
#include "CoreMinimal.h"
#include "EHintCategory.generated.h"

UENUM(BlueprintType)
enum class EHintCategory : uint8 {
    Lore,
    Survivor,
    Killer,
};


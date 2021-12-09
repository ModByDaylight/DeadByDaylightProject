#pragma once
#include "CoreMinimal.h"
#include "EBloodchestType.generated.h"

UENUM(BlueprintType)
enum class EBloodchestType : uint8 {
    None,
    Chest,
    SuperChests,
    EntityBox,
};


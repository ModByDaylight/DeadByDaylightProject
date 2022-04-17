#pragma once
#include "CoreMinimal.h"
#include "ETileSpawnPointType.generated.h"

UENUM(BlueprintType)
enum class ETileSpawnPointType : uint8 {
    Unspecified,
    Survivor,
    SurvivorItem,
    Killer,
    KillerItem,
    InteractableObject,
    BasementObject,
    Count,
};


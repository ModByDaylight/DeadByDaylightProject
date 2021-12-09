#pragma once
#include "CoreMinimal.h"
#include "EGameplayElementType.generated.h"

UENUM(BlueprintType)
enum class EGameplayElementType : uint8 {
    Generic,
    MeatLocker_Small,
    TileLights,
    MeatLocker_Big,
    Searchable,
    EdgeObjects,
    LivingWorldObjects,
    Hatch,
    Bookshelves,
    Totems,
    QuadrantSpawn,
    EdgeObjectsBlocker,
    BreakableWalls,
    Escape,
    Count,
};


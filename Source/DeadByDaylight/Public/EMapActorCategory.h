#pragma once
#include "CoreMinimal.h"
#include "EMapActorCategory.generated.h"

UENUM(BlueprintType)
enum class EMapActorCategory : uint8 {
    None,
    Objective,
    Chest,
    BlackLock,
    KillerObject,
    ExitGate,
};


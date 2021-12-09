#pragma once
#include "CoreMinimal.h"
#include "FK26AttachedCrowRemovalReason.generated.h"

UENUM()
enum class FK26AttachedCrowRemovalReason : uint8 {
    Invalid,
    LockerEnter,
    SurvivorDamagedByCrow,
    SurvivorDowned,
    SurvivorPickedUp,
    CrowFlashlighted,
    RemoveInteraction,
};


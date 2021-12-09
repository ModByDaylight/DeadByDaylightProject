#pragma once
#include "CoreMinimal.h"
#include "EFindInteractableMeatHookStatus.generated.h"

UENUM()
enum class EFindInteractableMeatHookStatus : uint8 {
    HookedSurvivor,
    Available,
};


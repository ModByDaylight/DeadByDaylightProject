#pragma once
#include "CoreMinimal.h"
#include "EFindInteractableGeneratorStatusFilter.generated.h"

UENUM()
enum class EFindInteractableGeneratorStatusFilter : uint8 {
    NeedRepair,
    CanBeDamaged,
};


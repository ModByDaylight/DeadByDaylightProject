#pragma once
#include "CoreMinimal.h"
#include "EFindInteractableLockerStatusFilter.generated.h"

UENUM()
enum class EFindInteractableLockerStatusFilter : uint8 {
    Empty,
    Occupied,
    Both,
};


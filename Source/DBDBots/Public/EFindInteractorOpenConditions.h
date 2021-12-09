#pragma once
#include "CoreMinimal.h"
#include "EFindInteractorOpenConditions.generated.h"

UENUM()
enum class EFindInteractorOpenConditions : uint8 {
    AllGate_OpenedHatch,
    All,
    ClosedOnly,
    OpenedOnly,
};


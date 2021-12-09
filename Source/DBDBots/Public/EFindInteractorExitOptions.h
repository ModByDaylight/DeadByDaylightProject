#pragma once
#include "CoreMinimal.h"
#include "EFindInteractorExitOptions.generated.h"

UENUM()
enum class EFindInteractorExitOptions : uint8 {
    All,
    HatchOnly,
    GateOnly,
};


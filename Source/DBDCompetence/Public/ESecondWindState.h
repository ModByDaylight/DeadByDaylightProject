#pragma once
#include "CoreMinimal.h"
#include "ESecondWindState.generated.h"

UENUM()
enum class ESecondWindState : uint8 {
    Loading,
    Locked,
    Available,
    InUse,
};


#pragma once
#include "CoreMinimal.h"
#include "EInteractionTargetRequirements.generated.h"

UENUM()
enum class EInteractionTargetRequirements : uint8 {
    BestTargetMustBeValid,
    AnyValidTarget,
    AnyTarget,
    NoTarget,
    None,
};


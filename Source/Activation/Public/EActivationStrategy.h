#pragma once
#include "CoreMinimal.h"
#include "EActivationStrategy.generated.h"

UENUM()
enum class EActivationStrategy : uint8 {
    ActivateIfAnyTagMatches,
    ActivateIfAllTagMatches,
    DeactivateIfAnyTagMatches,
    DeactivateIfAllTagMatches,
    DeactivateWhenDependenciesAreDeactivated,
};


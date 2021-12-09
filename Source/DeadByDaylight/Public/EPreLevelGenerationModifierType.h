#pragma once
#include "CoreMinimal.h"
#include "EPreLevelGenerationModifierType.generated.h"

UENUM()
enum class EPreLevelGenerationModifierType : uint8 {
    None,
    ModifyKillerObjectCount,
};


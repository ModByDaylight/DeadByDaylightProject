#pragma once
#include "CoreMinimal.h"
#include "ECharacterMovementTypes.generated.h"

UENUM(BlueprintType)
enum class ECharacterMovementTypes : uint8 {
    Normal,
    Run,
    Crouch,
};


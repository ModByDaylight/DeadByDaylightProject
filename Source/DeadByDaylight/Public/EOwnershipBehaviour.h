#pragma once
#include "CoreMinimal.h"
#include "EOwnershipBehaviour.generated.h"

UENUM(BlueprintType)
enum class EOwnershipBehaviour : uint8 {
    Personal,
    Shared,
};


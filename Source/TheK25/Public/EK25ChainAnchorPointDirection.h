#pragma once
#include "CoreMinimal.h"
#include "EK25ChainAnchorPointDirection.generated.h"

UENUM(BlueprintType)
enum class EK25ChainAnchorPointDirection : uint8 {
    Front,
    Left,
    Right,
    Back,
};


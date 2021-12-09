#pragma once
#include "CoreMinimal.h"
#include "EArmIkMode.generated.h"

UENUM(BlueprintType)
enum class EArmIkMode : uint8 {
    None,
    BothHand,
    OnlyRight,
    OnlyLeft,
    OneHandAtTime,
    BothAtSameTime,
};


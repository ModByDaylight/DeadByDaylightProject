#pragma once
#include "CoreMinimal.h"
#include "EControlMode.generated.h"

UENUM(BlueprintType)
enum class EControlMode : uint8 {
    MOUSE_KB,
    XBOX,
    PS,
    VITA,
    SWITCH,
    STADIA,
    SWITCH_PRO,
    ATLANTA,
    UNDEFINED,
};


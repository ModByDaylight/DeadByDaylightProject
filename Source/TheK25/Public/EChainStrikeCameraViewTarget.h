#pragma once
#include "CoreMinimal.h"
#include "EChainStrikeCameraViewTarget.generated.h"

UENUM()
enum class EChainStrikeCameraViewTarget : uint8 {
    Killer,
    Gateway,
    ControlledProjectile,
};


#pragma once
#include "CoreMinimal.h"
#include "EHealthStatus.generated.h"

UENUM()
enum class EHealthStatus : uint8 {
    Healthy,
    Wounded,
    DeepWounded,
    Dying,
};


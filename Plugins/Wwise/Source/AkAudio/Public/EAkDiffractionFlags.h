#pragma once
#include "CoreMinimal.h"
#include "EAkDiffractionFlags.generated.h"

UENUM()
enum class EAkDiffractionFlags {
    UseBuiltInParam,
    UseObstruction,
    CalcEmitterVirtualPosition = 0x3,
};


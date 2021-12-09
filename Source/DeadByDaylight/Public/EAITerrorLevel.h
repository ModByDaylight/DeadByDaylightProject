#pragma once
#include "CoreMinimal.h"
#include "EAITerrorLevel.generated.h"

UENUM()
enum class EAITerrorLevel : uint8 {
    None,
    Low,
    Min = 0x1,
    Medium,
    High,
    VeryHigh,
    Max = 0x4,
};


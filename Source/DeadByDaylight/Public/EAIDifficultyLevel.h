#pragma once
#include "CoreMinimal.h"
#include "EAIDifficultyLevel.generated.h"

UENUM()
enum class EAIDifficultyLevel : uint8 {
    VeryEasy,
    Easy,
    Medium,
    Hard,
    Suggested,
    Random,
    None,
    Max = 0x6,
};


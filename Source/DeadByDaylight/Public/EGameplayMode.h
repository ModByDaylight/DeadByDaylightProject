#pragma once
#include "CoreMinimal.h"
#include "EGameplayMode.generated.h"

UENUM()
enum class EGameplayMode : uint8 {
    Ranked,
    TrainingVersusBots,
    CustomGame,
    None,
};


#pragma once
#include "CoreMinimal.h"
#include "ECustomMatchDifficulty.generated.h"

UENUM()
enum class ECustomMatchDifficulty : uint8 {
    Easy,
    Medium,
    Hard,
    Suggested,
    Random,
    None,
    Max,
};


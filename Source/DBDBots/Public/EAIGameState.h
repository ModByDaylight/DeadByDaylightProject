#pragma once
#include "CoreMinimal.h"
#include "EAIGameState.generated.h"

UENUM()
enum class EAIGameState : uint8 {
    VeryEarly,
    Early,
    Mid,
    Late,
    VeryLate,
    Max,
};


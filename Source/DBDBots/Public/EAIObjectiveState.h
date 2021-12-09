#pragma once
#include "CoreMinimal.h"
#include "EAIObjectiveState.generated.h"

UENUM()
enum class EAIObjectiveState : uint8 {
    Early,
    Mid,
    Last,
    Completed,
};


#pragma once
#include "CoreMinimal.h"
#include "EAIFleePathStrategy.generated.h"

UENUM()
enum class EAIFleePathStrategy : uint8 {
    None,
    KeepGoal,
    Away,
    Loop,
    AwayLOS,
};


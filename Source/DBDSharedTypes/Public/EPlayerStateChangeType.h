#pragma once
#include "CoreMinimal.h"
#include "EPlayerStateChangeType.generated.h"

UENUM()
enum class EPlayerStateChangeType : uint8 {
    None,
    Negative,
    Neutral,
    Positive,
};


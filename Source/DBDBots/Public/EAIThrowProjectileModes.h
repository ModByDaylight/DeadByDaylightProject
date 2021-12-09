#pragma once
#include "CoreMinimal.h"
#include "EAIThrowProjectileModes.generated.h"

UENUM()
enum class EAIThrowProjectileModes : uint8 {
    OneShot,
    Continuous,
};


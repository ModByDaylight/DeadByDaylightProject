#pragma once
#include "CoreMinimal.h"
#include "EAIDangerState.generated.h"

UENUM()
enum class EAIDangerState : uint8 {
    Safe,
    Unsafe,
    Dire,
};


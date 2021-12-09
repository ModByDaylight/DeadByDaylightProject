#pragma once
#include "CoreMinimal.h"
#include "EPalletState.generated.h"

UENUM(BlueprintType)
enum class EPalletState : uint8 {
    Up,
    Falling,
    Fallen,
    Destroyed,
    Illusionary,
};


#pragma once
#include "CoreMinimal.h"
#include "ETheMettleOfManPhase.generated.h"

UENUM()
enum class ETheMettleOfManPhase : uint8 {
    Uninitialized,
    GainingTokens,
    CancelNextAttack,
    RevealWhenHealthy,
    RevealedToKiller,
};


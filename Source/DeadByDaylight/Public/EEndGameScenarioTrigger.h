#pragma once
#include "CoreMinimal.h"
#include "EEndGameScenarioTrigger.generated.h"

UENUM()
enum class EEndGameScenarioTrigger : uint8 {
    ClosedHatch,
    OpenedGate,
    CheatUsed,
    NotActivated,
};


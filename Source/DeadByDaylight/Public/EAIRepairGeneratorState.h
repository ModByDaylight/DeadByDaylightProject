#pragma once
#include "CoreMinimal.h"
#include "EAIRepairGeneratorState.generated.h"

UENUM()
enum class EAIRepairGeneratorState {
    FindAvailableGeneratorPosition,
    WalkToGenerator,
    RotateTowardsGenerator,
    BeginGeneratorRepairs,
    RepairingGenerator,
};


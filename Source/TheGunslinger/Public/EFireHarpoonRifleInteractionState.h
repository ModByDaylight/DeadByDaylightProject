#pragma once
#include "CoreMinimal.h"
#include "EFireHarpoonRifleInteractionState.generated.h"

UENUM()
enum class EFireHarpoonRifleInteractionState {
    None,
    Aiming,
    FirePhase,
    MissPhase,
    SuccessPhase,
    EndResult,
    CanceledAiming,
};


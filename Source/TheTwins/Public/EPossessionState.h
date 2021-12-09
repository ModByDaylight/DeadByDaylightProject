#pragma once
#include "CoreMinimal.h"
#include "EPossessionState.generated.h"

UENUM()
enum class EPossessionState {
    NotPossessed,
    BeingPossessed,
    Possessed,
};


#pragma once
#include "CoreMinimal.h"
#include "EFlurryOfKnivesInteractionState.generated.h"

UENUM()
enum class EFlurryOfKnivesInteractionState {
    Charging,
    Aiming,
    Throwing,
    Finished,
};


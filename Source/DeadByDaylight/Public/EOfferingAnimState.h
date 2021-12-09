#pragma once
#include "CoreMinimal.h"
#include "EOfferingAnimState.generated.h"

UENUM()
enum class EOfferingAnimState : uint8 {
    None,
    Idle,
    Init,
    Reveal,
    ShowInteraction,
    Burned,
    Returned,
    Cancel,
    Hidden,
};


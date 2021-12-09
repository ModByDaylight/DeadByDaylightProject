#pragma once
#include "CoreMinimal.h"
#include "EOfferingSequenceState.generated.h"

UENUM(BlueprintType)
enum class EOfferingSequenceState : uint8 {
    SmokeIn,
    FadeOut,
    FadeIn,
    NotInitialized,
    Idle,
    Init,
    InitDone,
    Reveal,
    RevealDone,
    ShowInteraction,
    Finalize,
    Done,
};


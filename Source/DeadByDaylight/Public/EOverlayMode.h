#pragma once
#include "CoreMinimal.h"
#include "EOverlayMode.generated.h"

UENUM()
enum class EOverlayMode : uint8 {
    Default,
    TrialOrTally,
    TutorialLevel,
    TutorialBotMatch,
};


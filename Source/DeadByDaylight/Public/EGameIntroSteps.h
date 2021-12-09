#pragma once
#include "CoreMinimal.h"
#include "EGameIntroSteps.generated.h"

UENUM()
enum class EGameIntroSteps {
    Idling,
    PlayingIntro,
    LoopingCamView,
};


#pragma once
#include "CoreMinimal.h"
#include "EOnboardingTutorialType.generated.h"

UENUM(BlueprintType)
enum class EOnboardingTutorialType : uint8 {
    TutorialLevel,
    BotMatchLevel,
    FinalReward,
};


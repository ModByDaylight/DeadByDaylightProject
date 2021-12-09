#pragma once
#include "CoreMinimal.h"
#include "EOnboardingTutorialButtonStyle.generated.h"

UENUM(BlueprintType)
enum class EOnboardingTutorialButtonStyle : uint8 {
    Default,
    Survivor,
    Killer,
    Reward,
};


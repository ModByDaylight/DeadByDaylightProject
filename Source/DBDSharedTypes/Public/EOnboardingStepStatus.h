#pragma once
#include "CoreMinimal.h"
#include "EOnboardingStepStatus.generated.h"

UENUM(BlueprintType)
enum class EOnboardingStepStatus : uint8 {
    Unavailable,
    Open,
    Completed,
};


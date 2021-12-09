#pragma once
#include "CoreMinimal.h"
#include "EPromptPriority.generated.h"

UENUM(BlueprintType)
enum class EPromptPriority : uint8 {
    Tutorial,
    High,
    Medium,
    Low,
};


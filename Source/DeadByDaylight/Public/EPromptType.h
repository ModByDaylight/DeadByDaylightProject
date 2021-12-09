#pragma once
#include "CoreMinimal.h"
#include "EPromptType.generated.h"

UENUM(BlueprintType)
enum class EPromptType : uint8 {
    None,
    ExitsPowered,
    HatchSpawned,
    HatchOpened,
};


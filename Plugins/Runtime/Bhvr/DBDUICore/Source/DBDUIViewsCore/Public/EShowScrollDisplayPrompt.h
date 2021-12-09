#pragma once
#include "CoreMinimal.h"
#include "EShowScrollDisplayPrompt.generated.h"

UENUM(BlueprintType)
enum class EShowScrollDisplayPrompt : uint8 {
    DontShow,
    AlwaysShow,
    ShowOnMouseOver,
};


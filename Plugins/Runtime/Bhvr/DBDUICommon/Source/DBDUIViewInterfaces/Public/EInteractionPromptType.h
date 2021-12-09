#pragma once
#include "CoreMinimal.h"
#include "EInteractionPromptType.generated.h"

UENUM(BlueprintType)
enum class EInteractionPromptType : uint8 {
    PressButton,
    MashButton,
    HoldButton,
    AlternateTwoButtons,
    WiggleThumbstick,
    MovementAxes,
    MovementKeys,
};


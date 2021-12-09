#pragma once
#include "CoreMinimal.h"
#include "EInteractionCancelInputModes.generated.h"

UENUM()
enum class EInteractionCancelInputModes : uint8 {
    PressCancelInput,
    InvertWithStopInputFlow,
};


#pragma once
#include "CoreMinimal.h"
#include "EActionButtonState.generated.h"

UENUM()
enum class EActionButtonState : uint8 {
    Normal,
    Toggled,
    Disabled,
    Hidden,
};


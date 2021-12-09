#pragma once
#include "CoreMinimal.h"
#include "EInventoryButtonState.generated.h"

UENUM()
enum class EInventoryButtonState : uint8 {
    StateDisabled,
    StateEmpty,
    StateLocked,
    StateWithItem,
    StateWithItemDisabled,
    StateWithItemLocked,
    StatePrivate,
};


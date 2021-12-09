#pragma once
#include "CoreMinimal.h"
#include "EPawnInputPressTypes.generated.h"

UENUM()
enum class EPawnInputPressTypes : uint8 {
    None,
    FastInteract,
    Interact,
    Wiggle,
    Struggle,
    Slash,
    Attack,
    Action,
    SecondaryAction,
    UseItem,
    DropItem,
    Gesture01,
    Gesture02,
    Gesture03,
    Gesture04,
};


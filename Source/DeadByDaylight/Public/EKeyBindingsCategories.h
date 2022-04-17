#pragma once
#include "CoreMinimal.h"
#include "EKeyBindingsCategories.generated.h"

UENUM()
enum class EKeyBindingsCategories {
    None = -0x1,
    Movement,
    Interactions,
    Camera,
    Gestures,
};


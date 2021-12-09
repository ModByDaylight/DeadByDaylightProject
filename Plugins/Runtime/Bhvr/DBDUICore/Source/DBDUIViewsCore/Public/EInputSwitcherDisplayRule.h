#pragma once
#include "CoreMinimal.h"
#include "EInputSwitcherDisplayRule.generated.h"

UENUM()
enum class EInputSwitcherDisplayRule : uint8 {
    Undefined,
    OnlyGamepad,
    OnlyKeyboard,
    Always,
};


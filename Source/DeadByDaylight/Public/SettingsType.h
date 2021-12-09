#pragma once
#include "CoreMinimal.h"
#include "SettingsType.generated.h"

UENUM()
enum class SettingsType {
    None = -0x1,
    Button,
    PlayerId,
    NumericStepper,
    Dropdown,
    ColorBar,
    TextStepper,
    BoolTextStepper,
    Checkbox,
};


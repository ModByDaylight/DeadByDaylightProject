#pragma once
#include "CoreMinimal.h"
#include "SettingsSubCategory.generated.h"

UENUM()
enum class SettingsSubCategory {
    None = -0x1,
    Language,
    Tutorial,
    Subtitles,
    Privacy,
    Online,
    Graphics,
    UIHud,
    Audio,
    CommonControls,
    SurvivorControls,
    KillerControls,
    ColorBlindMode,
    Atlanta,
};


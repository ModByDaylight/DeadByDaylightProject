#pragma once
#include "CoreMinimal.h"
#include "ESoundIndicatorType.generated.h"

UENUM()
enum class ESoundIndicatorType {
    None,
    CloseNoiseIndicator,
    ExitOpenedIndicator,
    GeneratorIndicator,
    HatchIndicator,
    HookedIndicator,
    KillerCuesIndicator,
    GlobalSoundIndicator,
    DirectionalTerrorRadiusIndicator,
};


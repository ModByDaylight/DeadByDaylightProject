#pragma once
#include "CoreMinimal.h"
#include "EOverlayTabs.generated.h"

UENUM()
enum class EOverlayTabs : uint8 {
    Settings,
    Controls,
    Help,
    Survivors,
    CoreTabCount,
    About,
    Language,
};


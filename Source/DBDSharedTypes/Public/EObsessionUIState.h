#pragma once
#include "CoreMinimal.h"
#include "EObsessionUIState.generated.h"

UENUM(BlueprintType)
enum class EObsessionUIState : uint8 {
    Off,
    Target,
    Chased,
    Dead,
};


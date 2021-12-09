#pragma once
#include "CoreMinimal.h"
#include "EDemogorgonPortalState.generated.h"

UENUM(BlueprintType)
enum class EDemogorgonPortalState : uint8 {
    Hidden,
    InUse,
    Exposed,
};


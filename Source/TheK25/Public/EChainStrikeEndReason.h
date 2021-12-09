#pragma once
#include "CoreMinimal.h"
#include "EChainStrikeEndReason.generated.h"

UENUM()
enum class EChainStrikeEndReason : uint8 {
    None,
    AbortedGatewayPlacementState,
    AbortedGatewayPlacementBecauseOfInvalidPlacementState,
    AbortedGatewayPossession,
    ControlledProjectileStopped,
};


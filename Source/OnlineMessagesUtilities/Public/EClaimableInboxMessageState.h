#pragma once
#include "CoreMinimal.h"
#include "EClaimableInboxMessageState.generated.h"

UENUM(BlueprintType)
enum class EClaimableInboxMessageState : uint8 {
    NONE,
    CLAIMED,
};


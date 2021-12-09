#pragma once
#include "CoreMinimal.h"
#include "EClaimableInboxMessageType.generated.h"

UENUM(BlueprintType)
enum class EClaimableInboxMessageType : uint8 {
    None,
    Currency,
    Inventory,
};


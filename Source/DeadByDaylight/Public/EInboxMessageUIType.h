#pragma once
#include "CoreMinimal.h"
#include "EInboxMessageUIType.generated.h"

UENUM(BlueprintType)
enum class EInboxMessageUIType : uint8 {
    None,
    Social,
    Rewards,
    News,
};


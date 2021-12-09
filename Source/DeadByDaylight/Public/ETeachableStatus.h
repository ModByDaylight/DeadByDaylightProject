#pragma once
#include "CoreMinimal.h"
#include "ETeachableStatus.generated.h"

UENUM(BlueprintType)
enum class ETeachableStatus : uint8 {
    Unknown,
    Locked,
    AvailableInBloodWeb,
    AvailableInShrine,
    Acquired,
};


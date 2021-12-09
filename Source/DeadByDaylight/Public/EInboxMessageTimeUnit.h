#pragma once
#include "CoreMinimal.h"
#include "EInboxMessageTimeUnit.generated.h"

UENUM(BlueprintType)
enum class EInboxMessageTimeUnit : uint8 {
    Days,
    Hours,
    Minutes,
};


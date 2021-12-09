#pragma once
#include "CoreMinimal.h"
#include "EInboxMessageUIState.generated.h"

UENUM(BlueprintType)
enum class EInboxMessageUIState : uint8 {
    New,
    Read,
    Archived,
};


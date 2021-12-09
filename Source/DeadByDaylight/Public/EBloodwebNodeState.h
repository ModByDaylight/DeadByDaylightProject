#pragma once
#include "CoreMinimal.h"
#include "EBloodwebNodeState.generated.h"

UENUM()
enum class EBloodwebNodeState : uint8 {
    Inactive,
    Available,
    Locked_Do_Not_Use_Deprecated,
    Collected,
    Consumed,
    Count,
};


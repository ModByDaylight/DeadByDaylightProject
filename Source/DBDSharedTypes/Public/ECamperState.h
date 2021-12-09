#pragma once
#include "CoreMinimal.h"
#include "ECamperState.generated.h"

UENUM(BlueprintType)
enum class ECamperState : uint8 {
    VE_None,
    VE_Navigate,
    VE_Interact,
    VE_MAX UMETA(Hidden),
};


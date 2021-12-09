#pragma once
#include "CoreMinimal.h"
#include "EBlindType.generated.h"

UENUM()
enum class EBlindType : uint8 {
    VE_None,
    VE_Flashlight,
    VE_SacrificeSuspended,
    VE_Firecracker,
    VE_MAX UMETA(Hidden),
};


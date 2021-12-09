#pragma once
#include "CoreMinimal.h"
#include "EAnimNotifyType.generated.h"

UENUM()
enum class EAnimNotifyType : uint8 {
    VE_None,
    VE_Pickup,
    VE_Release,
    VE_MAX UMETA(Hidden),
};


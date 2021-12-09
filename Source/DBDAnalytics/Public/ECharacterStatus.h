#pragma once
#include "CoreMinimal.h"
#include "ECharacterStatus.generated.h"

UENUM()
enum class ECharacterStatus : uint8 {
    Crawling,
    BeingPickedUp,
    BeingCarried,
    BeingHealed,
    BeingMended,
    BeingPutDown,
    BeingPutOnHook,
    BeingPulledFromCloset,
    BeingKilled,
    OnHook,
};


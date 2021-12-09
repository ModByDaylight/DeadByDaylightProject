#pragma once
#include "CoreMinimal.h"
#include "EPlayerRole.generated.h"

UENUM(BlueprintType)
enum class EPlayerRole : uint8 {
    VE_None,
    VE_Slasher,
    VE_Camper,
    VE_Observer,
    Max,
};


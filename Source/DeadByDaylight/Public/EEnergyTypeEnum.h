#pragma once
#include "CoreMinimal.h"
#include "EEnergyTypeEnum.generated.h"

UENUM(BlueprintType)
enum class EEnergyTypeEnum : uint8 {
    EInvalid,
    EBattery,
    EHealth,
};


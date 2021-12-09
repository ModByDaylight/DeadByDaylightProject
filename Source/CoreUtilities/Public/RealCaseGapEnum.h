#pragma once
#include "CoreMinimal.h"
#include "RealCaseGapEnum.generated.h"

UENUM()
enum class RealCaseGapEnum {
    None,
    SavefileDeserializationFailure = 0x64,
    EarnPlayerXpParamError = 0x192,
};


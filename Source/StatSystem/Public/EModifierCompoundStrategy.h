#pragma once
#include "CoreMinimal.h"
#include "EModifierCompoundStrategy.generated.h"

UENUM()
enum class EModifierCompoundStrategy : uint8 {
    Add,
    AddPlusOne,
    Min,
    Max,
    Mult,
    MultWithCompoundNegative,
    MultWithCompoundNegativeMinusOne,
};


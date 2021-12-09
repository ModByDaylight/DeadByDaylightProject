#pragma once
#include "CoreMinimal.h"
#include "EModifierOperationStrategy.generated.h"

UENUM()
enum class EModifierOperationStrategy : uint8 {
    Add,
    Subs,
    Mult,
    Div,
};


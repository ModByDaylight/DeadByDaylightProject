#pragma once
#include "CoreMinimal.h"
#include "EK25ChainCreationStrategy.generated.h"

UENUM()
enum class EK25ChainCreationStrategy : uint8 {
    Spline,
    PassedPoints,
};


#pragma once
#include "CoreMinimal.h"
#include "ESightStatus.generated.h"

UENUM()
enum class ESightStatus : uint8 {
    OutOfSight,
    Discerned,
    Sighted,
};


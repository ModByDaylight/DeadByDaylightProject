#pragma once
#include "CoreMinimal.h"
#include "EStreamVideoDataType.generated.h"

UENUM()
enum class EStreamVideoDataType {
    None,
    LoreCinematic,
    SurvivorTutorial,
    KillerTutorial,
    Count,
};


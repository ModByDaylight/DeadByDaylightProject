#pragma once
#include "CoreMinimal.h"
#include "ECameraOffsetState.generated.h"

UENUM()
enum class ECameraOffsetState {
    None,
    Default,
    Crouching,
    Crawling,
    Carried,
};


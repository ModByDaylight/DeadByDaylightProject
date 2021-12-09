#pragma once
#include "CoreMinimal.h"
#include "EPingQuality.generated.h"

UENUM()
enum class EPingQuality : uint8 {
    Good,
    Bad,
    Awful,
};


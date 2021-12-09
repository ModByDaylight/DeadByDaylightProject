#pragma once
#include "CoreMinimal.h"
#include "ECustomMatchOptions.generated.h"

UENUM()
enum class ECustomMatchOptions : uint8 {
    All,
    None,
    Owned,
    Random,
    Special,
    Count,
};


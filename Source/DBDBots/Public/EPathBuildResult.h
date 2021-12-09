#pragma once
#include "CoreMinimal.h"
#include "EPathBuildResult.generated.h"

UENUM()
enum class EPathBuildResult {
    None,
    Failed,
    Succeeded,
    Partial,
    InProgress,
};


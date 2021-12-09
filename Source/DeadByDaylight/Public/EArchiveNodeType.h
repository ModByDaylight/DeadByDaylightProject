#pragma once
#include "CoreMinimal.h"
#include "EArchiveNodeType.generated.h"

UENUM()
enum class EArchiveNodeType {
    Narrative,
    Task,
    Challenge,
    Contextual,
    Reward,
    None = 0xFF,
};


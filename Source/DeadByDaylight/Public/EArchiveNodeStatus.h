#pragma once
#include "CoreMinimal.h"
#include "EArchiveNodeStatus.generated.h"

UENUM()
enum class EArchiveNodeStatus {
    Closed,
    Completed,
    Open,
    Paused,
    Waiting,
    Error,
};


#pragma once
#include "CoreMinimal.h"
#include "ESaveGameErrorCategory.generated.h"

UENUM()
enum class ESaveGameErrorCategory {
    EvaluateDisconnectPenalty,
    SaveGameSaveError,
    SaveGameUnreadable,
    SaveGameValidation,
    SaveFailed,
};


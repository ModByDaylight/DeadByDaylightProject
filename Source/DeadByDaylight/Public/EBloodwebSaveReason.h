#pragma once
#include "CoreMinimal.h"
#include "EBloodwebSaveReason.generated.h"

UENUM()
enum class EBloodwebSaveReason {
    PayToRefresh,
    PrestigeUp,
    ShouldRebuild,
    Cheat,
};


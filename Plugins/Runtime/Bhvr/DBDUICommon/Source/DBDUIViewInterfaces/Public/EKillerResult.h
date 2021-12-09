#pragma once
#include "CoreMinimal.h"
#include "EKillerResult.generated.h"

UENUM(BlueprintType)
enum class EKillerResult : uint8 {
    DisgracefulDefeat,
    EntityDispleased,
    BrutalKiller,
    RuthlessKiller,
    MercilessKiller,
};


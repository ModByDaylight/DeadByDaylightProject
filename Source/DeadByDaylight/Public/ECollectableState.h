#pragma once
#include "CoreMinimal.h"
#include "ECollectableState.generated.h"

UENUM()
enum class ECollectableState : uint8 {
    OnGround,
    Stored,
    Equipped,
    ToBeDropped,
    InSearchable,
};


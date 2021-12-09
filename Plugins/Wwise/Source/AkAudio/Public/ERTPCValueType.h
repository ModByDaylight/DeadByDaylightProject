#pragma once
#include "CoreMinimal.h"
#include "ERTPCValueType.generated.h"

UENUM()
enum class ERTPCValueType : uint8 {
    Default,
    Global,
    GameObject,
    PlayingID,
    Unavailable,
};


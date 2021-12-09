#pragma once
#include "CoreMinimal.h"
#include "AkActionOnEventType.generated.h"

UENUM()
enum class AkActionOnEventType : uint8 {
    Stop,
    Pause,
    Resume,
    Break,
    ReleaseEnvelope,
};


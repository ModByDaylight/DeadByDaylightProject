#pragma once
#include "CoreMinimal.h"
#include "EEscapeType.generated.h"

UENUM()
enum class EEscapeType : uint8 {
    Escape_ExitGate,
    Escape_Hatch,
    Escape_KillerDisconnect,
    Escape_MAX UMETA(Hidden),
};


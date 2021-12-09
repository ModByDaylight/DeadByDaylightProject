#pragma once
#include "CoreMinimal.h"
#include "EGateType.generated.h"

UENUM()
enum class EGateType : uint8 {
    VE_AndGate,
    VE_TimerGate,
    VE_MAX UMETA(Hidden),
};


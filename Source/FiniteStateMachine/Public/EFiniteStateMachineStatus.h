#pragma once
#include "CoreMinimal.h"
#include "EFiniteStateMachineStatus.generated.h"

UENUM()
enum class EFiniteStateMachineStatus : uint8 {
    Stopped,
    Running,
    Paused,
};


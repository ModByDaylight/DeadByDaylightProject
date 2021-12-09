#pragma once
#include "CoreMinimal.h"
#include "ESingleHookState.generated.h"

UENUM()
enum class ESingleHookState {
    EMPTY,
    UNHOOKED,
    HOOKED,
    DISCONNECTED,
};


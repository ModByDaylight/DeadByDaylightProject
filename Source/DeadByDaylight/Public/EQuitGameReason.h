#pragma once
#include "CoreMinimal.h"
#include "EQuitGameReason.generated.h"

UENUM()
enum class EQuitGameReason {
    None,
    Logout,
    Suspend,
    Shutdown,
    Count,
};


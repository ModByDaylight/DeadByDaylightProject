#pragma once
#include "CoreMinimal.h"
#include "ESnowmanState.generated.h"

UENUM()
enum class ESnowmanState : uint8 {
    Idle,
    BeingEntered,
    Controlled,
    Destroyed,
};


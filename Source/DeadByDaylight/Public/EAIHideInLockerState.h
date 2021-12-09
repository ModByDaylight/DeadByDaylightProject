#pragma once
#include "CoreMinimal.h"
#include "EAIHideInLockerState.generated.h"

UENUM()
enum class EAIHideInLockerState {
    WalkToLocker,
    GetIntoLocker,
    HidingInLocker,
};


#pragma once
#include "CoreMinimal.h"
#include "ENavLinkPlayerStates.generated.h"

UENUM()
enum class ENavLinkPlayerStates {
    RequestStart,
    MoveStart,
    Using,
    MoveEnd,
    Release,
};


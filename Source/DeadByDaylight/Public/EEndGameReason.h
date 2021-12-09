#pragma once
#include "CoreMinimal.h"
#include "EEndGameReason.generated.h"

UENUM()
enum class EEndGameReason : uint8 {
    None,
    Normal,
    KillerLeft,
    PlayerLeftDuringLoading,
    KillerLeftEarly,
    InvalidPlayerRoles,
    LoadingTimeout,
};


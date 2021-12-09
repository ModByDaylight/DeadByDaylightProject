#pragma once
#include "CoreMinimal.h"
#include "EPalletStunZoneSideStrategy.generated.h"

UENUM()
enum class EPalletStunZoneSideStrategy : uint8 {
    OppositeSideToPlayerExecutingPulldown,
    SameSideToPlayerExecutingPulldown,
};


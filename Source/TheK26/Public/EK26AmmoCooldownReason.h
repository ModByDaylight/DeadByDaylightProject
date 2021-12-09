#pragma once
#include "CoreMinimal.h"
#include "EK26AmmoCooldownReason.generated.h"

UENUM()
enum class EK26AmmoCooldownReason : uint8 {
    Expired,
    Fired,
};


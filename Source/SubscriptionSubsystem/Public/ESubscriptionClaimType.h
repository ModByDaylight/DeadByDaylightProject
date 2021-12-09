#pragma once
#include "CoreMinimal.h"
#include "ESubscriptionClaimType.generated.h"

UENUM()
enum class ESubscriptionClaimType : uint8 {
    None,
    Daily,
    Renewal,
};


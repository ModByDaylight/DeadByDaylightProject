#pragma once
#include "CoreMinimal.h"
#include "OnProjectileSummonedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnProjectileSummoned, int32, remainingAmmo, int32, maxAmmo);


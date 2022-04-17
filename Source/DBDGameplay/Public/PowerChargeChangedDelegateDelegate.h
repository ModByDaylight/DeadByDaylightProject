#pragma once
#include "CoreMinimal.h"
#include "PowerChargeChangedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPowerChargeChangedDelegate, float, currentChargePercent);


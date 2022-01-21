#pragma once
#include "CoreMinimal.h"
#include "PowerChargeChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPowerChargeChangedDelegate, float, currentChargePercent);


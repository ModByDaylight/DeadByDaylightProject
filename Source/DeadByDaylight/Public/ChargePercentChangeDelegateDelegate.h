#pragma once
#include "CoreMinimal.h"
#include "ChargePercentChangeDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChargePercentChangeDelegate, float, ChargePercent);


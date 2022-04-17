#pragma once
#include "CoreMinimal.h"
#include "OnHeatChargeUpdateDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHeatChargeUpdateDelegate, const float, currentChargePercent, const bool, isChainsawOverheating);


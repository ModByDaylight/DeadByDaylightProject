#pragma once
#include "CoreMinimal.h"
#include "ChargeableCompletionPercentChangeDelegateDelegate.generated.h"

class UChargeableComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FChargeableCompletionPercentChangeDelegate, UChargeableComponent*, ChargeableComponent, float, PercentCompletionChange, float, TotalPercentComplete);


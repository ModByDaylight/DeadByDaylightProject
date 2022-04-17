#pragma once
#include "CoreMinimal.h"
#include "ChargeableCompletionPercentChangeCosmeticDelegateDelegate.generated.h"

class UChargeableComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FChargeableCompletionPercentChangeCosmeticDelegate, UChargeableComponent*, ChargeableComponent, float, TotalPercentComplete);


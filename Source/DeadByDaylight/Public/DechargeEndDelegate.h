#pragma once
#include "CoreMinimal.h"
#include "DechargeEndDelegate.generated.h"

class UChargeableComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDechargeEnd, UChargeableComponent*, ChargeableComponent);


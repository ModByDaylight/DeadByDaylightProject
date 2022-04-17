#pragma once
#include "CoreMinimal.h"
#include "DechargeBeginDelegate.generated.h"

class UChargeableComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDechargeBegin, UChargeableComponent*, ChargeableComponent);


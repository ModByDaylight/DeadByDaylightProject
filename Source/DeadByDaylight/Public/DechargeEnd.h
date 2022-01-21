#pragma once
#include "CoreMinimal.h"
#include "DechargeEnd.generated.h"

class UChargeableComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDechargeEnd, UChargeableComponent*, ChargeableComponent);


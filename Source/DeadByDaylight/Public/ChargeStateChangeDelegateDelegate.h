#pragma once
#include "CoreMinimal.h"
#include "ChargeStateChangeDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChargeStateChangeDelegate, bool, Empty);


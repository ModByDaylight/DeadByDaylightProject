#pragma once
#include "CoreMinimal.h"
#include "OnTwoIntegersGenericEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTwoIntegersGenericEvent, int32, param1, int32, param2);


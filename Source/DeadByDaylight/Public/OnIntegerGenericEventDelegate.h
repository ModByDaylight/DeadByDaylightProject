#pragma once
#include "CoreMinimal.h"
#include "OnIntegerGenericEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIntegerGenericEvent, int32, param);


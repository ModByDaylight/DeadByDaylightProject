#pragma once
#include "CoreMinimal.h"
#include "OnLoadoutWidgetInventoryItemUnselectedEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLoadoutWidgetInventoryItemUnselectedEvent, int32, itemIndex);


#pragma once
#include "CoreMinimal.h"
#include "OnLoadoutWidgetInventoryItemSelectedEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLoadoutWidgetInventoryItemSelectedEvent, int32, itemIndex);


#pragma once
#include "CoreMinimal.h"
#include "OnLoadoutWidgetSlotClickedEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLoadoutWidgetSlotClickedEvent, int32, slotID);


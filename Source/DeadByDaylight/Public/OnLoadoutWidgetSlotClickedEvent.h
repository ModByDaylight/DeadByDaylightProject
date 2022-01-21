#pragma once
#include "CoreMinimal.h"
#include "OnLoadoutWidgetSlotClickedEvent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLoadoutWidgetSlotClickedEvent, int32, slotID);


#pragma once
#include "CoreMinimal.h"
#include "TooltipPressedData.h"
#include "ELoadoutSlot.h"
#include "OnTooltipTriggeredOnLoadoutSlotEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTooltipTriggeredOnLoadoutSlotEvent, const FTooltipPressedData&, tooltipPressedData, ELoadoutSlot, slotId);


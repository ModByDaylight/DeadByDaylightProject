#pragma once
#include "CoreMinimal.h"
#include "TooltipPressedData.h"
#include "OnTooltipTriggeredOnItemEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTooltipTriggeredOnItemEvent, const FTooltipPressedData&, tooltipPressedData, FName, itemId);


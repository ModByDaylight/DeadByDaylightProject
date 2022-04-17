#pragma once
#include "CoreMinimal.h"
#include "TooltipPressedData.h"
#include "OnTooltipTriggeredEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTooltipTriggeredEvent, const FTooltipPressedData&, tooltipPressedData);


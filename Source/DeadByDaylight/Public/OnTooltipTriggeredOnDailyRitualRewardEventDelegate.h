#pragma once
#include "CoreMinimal.h"
#include "TooltipPressedData.h"
#include "OnTooltipTriggeredOnDailyRitualRewardEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnTooltipTriggeredOnDailyRitualRewardEvent, const FTooltipPressedData&, tooltipPressedData, const int32, ritualId, const FString&, ritualType, const int32, rewardIndex);


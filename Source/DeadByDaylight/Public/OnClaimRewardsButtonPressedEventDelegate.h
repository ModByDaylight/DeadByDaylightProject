#pragma once
#include "CoreMinimal.h"
#include "OnClaimRewardsButtonPressedEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnClaimRewardsButtonPressedEvent, int32, ritualId);


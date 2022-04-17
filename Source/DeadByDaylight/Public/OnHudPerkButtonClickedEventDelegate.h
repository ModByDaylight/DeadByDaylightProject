#pragma once
#include "CoreMinimal.h"
#include "OnHudPerkButtonClickedEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHudPerkButtonClickedEvent, FName, perkId, bool, clickedOnPerksWidget);


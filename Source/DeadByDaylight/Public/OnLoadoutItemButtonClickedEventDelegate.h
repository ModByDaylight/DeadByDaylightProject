#pragma once
#include "CoreMinimal.h"
#include "OnLoadoutItemButtonClickedEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLoadoutItemButtonClickedEvent, FName, itemID);


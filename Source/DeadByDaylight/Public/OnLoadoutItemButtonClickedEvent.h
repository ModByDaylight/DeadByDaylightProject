#pragma once
#include "CoreMinimal.h"
#include "OnLoadoutItemButtonClickedEvent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLoadoutItemButtonClickedEvent, FName, itemID);


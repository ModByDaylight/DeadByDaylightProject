#pragma once
#include "CoreMinimal.h"
#include "OnLoadoutFilterClickedEvent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLoadoutFilterClickedEvent, FName, filterName);


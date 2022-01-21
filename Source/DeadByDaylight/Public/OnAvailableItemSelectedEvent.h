#pragma once
#include "CoreMinimal.h"
#include "OnAvailableItemSelectedEvent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAvailableItemSelectedEvent, int32, itemIndex);


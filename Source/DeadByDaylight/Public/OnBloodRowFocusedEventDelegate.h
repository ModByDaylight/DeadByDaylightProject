#pragma once
#include "CoreMinimal.h"
#include "OnBloodRowFocusedEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBloodRowFocusedEvent, int32, row);


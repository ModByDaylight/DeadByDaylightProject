#pragma once
#include "CoreMinimal.h"
#include "OnToggleGroupClickEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnToggleGroupClickEvent, int32, toggleIndex);


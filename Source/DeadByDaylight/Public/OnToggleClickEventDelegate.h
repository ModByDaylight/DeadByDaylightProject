#pragma once
#include "CoreMinimal.h"
#include "OnToggleClickEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnToggleClickEvent, bool, toggleValue);


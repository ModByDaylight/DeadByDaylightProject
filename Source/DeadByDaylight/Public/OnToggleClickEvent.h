#pragma once
#include "CoreMinimal.h"
#include "OnToggleClickEvent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnToggleClickEvent, bool, toggleValue);


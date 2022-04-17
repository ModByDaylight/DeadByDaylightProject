#pragma once
#include "CoreMinimal.h"
#include "OnSlotClickedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSlotClicked, int32, slotIndex);


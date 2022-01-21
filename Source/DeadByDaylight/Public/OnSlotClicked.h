#pragma once
#include "CoreMinimal.h"
#include "OnSlotClicked.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSlotClicked, int32, slotIndex);


#pragma once
#include "CoreMinimal.h"
#include "InventorySlotData.h"
#include "UObject/NoExportTypes.h"
#include "OnLoadoutItemButtonLongPressEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLoadoutItemButtonLongPressEvent, const FInventorySlotData&, itemSlotData, FVector2D, position);


#pragma once
#include "CoreMinimal.h"
#include "StoreItemSlotData.h"
#include "OnCustomizationItemSelectedEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnCustomizationItemSelectedEvent, int32, itemIndex, const FStoreItemSlotData&, selectedItem, const FStoreItemSlotData&, parentItem);


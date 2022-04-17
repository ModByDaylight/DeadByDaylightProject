#pragma once
#include "CoreMinimal.h"
#include "OnStoreAuricCellButtonClickEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStoreAuricCellButtonClickEvent, int32, cellIndex);


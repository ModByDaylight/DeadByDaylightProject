#pragma once
#include "CoreMinimal.h"
#include "OnStoreAuricCellButtonClickEvent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStoreAuricCellButtonClickEvent, int32, cellIndex);


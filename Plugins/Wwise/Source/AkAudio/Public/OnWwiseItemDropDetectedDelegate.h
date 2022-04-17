#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnWwiseItemDropDetectedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWwiseItemDropDetected, FGuid, ItemDroppedID);


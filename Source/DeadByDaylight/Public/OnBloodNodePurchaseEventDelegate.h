#pragma once
#include "CoreMinimal.h"
#include "OnBloodNodePurchaseEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBloodNodePurchaseEvent, int32, characterId);


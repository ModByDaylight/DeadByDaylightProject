#pragma once
#include "CoreMinimal.h"
#include "OnBloodNodePurchaseEvent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBloodNodePurchaseEvent, int32, characterId);


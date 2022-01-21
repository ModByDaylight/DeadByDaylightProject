#pragma once
#include "CoreMinimal.h"
#include "OnBloodStoreRegenerateEvent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBloodStoreRegenerateEvent, int32, characterId);


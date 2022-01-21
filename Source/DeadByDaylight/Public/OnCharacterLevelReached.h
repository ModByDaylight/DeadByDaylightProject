#pragma once
#include "CoreMinimal.h"
#include "OnCharacterLevelReached.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterLevelReached, int32, characterLevelReached);


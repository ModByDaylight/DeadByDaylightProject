#pragma once
#include "CoreMinimal.h"
#include "OnCharacterSelectedEvent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterSelectedEvent, int32, charIndex);


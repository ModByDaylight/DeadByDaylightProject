#pragma once
#include "CoreMinimal.h"
#include "OnCharacterSelectedEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterSelectedEvent, int32, charIndex);


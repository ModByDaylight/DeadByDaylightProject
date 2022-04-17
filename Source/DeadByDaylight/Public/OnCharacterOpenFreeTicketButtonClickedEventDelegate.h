#pragma once
#include "CoreMinimal.h"
#include "OnCharacterOpenFreeTicketButtonClickedEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterOpenFreeTicketButtonClickedEvent, int32, characterIndex);


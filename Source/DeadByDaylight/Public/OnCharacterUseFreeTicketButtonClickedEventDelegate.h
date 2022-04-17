#pragma once
#include "CoreMinimal.h"
#include "OnCharacterUseFreeTicketButtonClickedEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCharacterUseFreeTicketButtonClickedEvent, const FString&, ticketId, const FString&, characterName);


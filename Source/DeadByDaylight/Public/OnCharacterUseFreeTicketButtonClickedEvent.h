#pragma once
#include "CoreMinimal.h"
#include "OnCharacterUseFreeTicketButtonClickedEvent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCharacterUseFreeTicketButtonClickedEvent, const FString&, ticketId, const FString&, characterName);


#pragma once
#include "CoreMinimal.h"
#include "OnPromoPackSuggestionClickedEvent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPromoPackSuggestionClickedEvent, const FName&, promoPackID);


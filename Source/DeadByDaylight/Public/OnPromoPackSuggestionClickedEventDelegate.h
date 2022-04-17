#pragma once
#include "CoreMinimal.h"
#include "OnPromoPackSuggestionClickedEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPromoPackSuggestionClickedEvent, const FName&, promoPackID);


#pragma once
#include "CoreMinimal.h"
#include "OnUnlockWithCurrencyEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUnlockWithCurrencyEvent, int32, currencyId, const FString&, combinedItem);


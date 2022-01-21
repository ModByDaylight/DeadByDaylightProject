#pragma once
#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "OnPurchaseButtonClickedEvent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPurchaseButtonClickedEvent, const ECurrencyType, currencyType, int32, price);


#pragma once
#include "CoreMinimal.h"
#include "OnPromoPackItemClicked.generated.h"

class UUMGPromoPackItemWidget;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FOnPromoPackItemClicked, UUMGPromoPackItemWidget*, promoPackSelected);


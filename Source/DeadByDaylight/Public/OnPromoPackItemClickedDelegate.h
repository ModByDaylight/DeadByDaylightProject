#pragma once
#include "CoreMinimal.h"
#include "OnPromoPackItemClickedDelegate.generated.h"

class UUMGPromoPackItemWidget;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FOnPromoPackItemClicked, UUMGPromoPackItemWidget*, promoPackSelected);


#pragma once
#include "CoreMinimal.h"
#include "UMGBaseStorefrontWidget.h"
#include "UMGBaseCurrencyStorefrontWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class UUMGBaseCurrencyStorefrontWidget : public UUMGBaseStorefrontWidget {
    GENERATED_BODY()
public:
    UUMGBaseCurrencyStorefrontWidget();
protected:
    UFUNCTION()
    void BroadcastOnAuricCellButtonClicked(int32 cellIndex);
    
};


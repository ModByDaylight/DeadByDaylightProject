#pragma once
#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "ECurrencyType.h"
#include "UMGCurrencyWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class UUMGCurrencyWidget : public UUMGBaseButtonWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECurrencyType currencyType;
    
    UUMGCurrencyWidget();
protected:
    UFUNCTION()
    void HandleTooltipLongPressEvent();
    
};


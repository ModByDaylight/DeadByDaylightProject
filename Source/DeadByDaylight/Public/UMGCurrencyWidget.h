#pragma once
#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "UMGBaseButtonWidget.h"
#include "UMGCurrencyWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class UUMGCurrencyWidget : public UUMGBaseButtonWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECurrencyType currencyType;
    
protected:
    UFUNCTION()
    void HandleTooltipLongPressEvent();
    
public:
    UUMGCurrencyWidget();
};


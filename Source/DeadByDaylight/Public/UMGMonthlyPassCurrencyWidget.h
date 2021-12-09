#pragma once
#include "CoreMinimal.h"
#include "UMGMonthlyPassRewardItemWidget.h"
#include "UMGMonthlyPassCurrencyWidget.generated.h"

class UImage;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGMonthlyPassCurrencyWidget : public UUMGMonthlyPassRewardItemWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* CurrencyBackground;
    
public:
    UUMGMonthlyPassCurrencyWidget();
};


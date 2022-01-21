#pragma once
#include "CoreMinimal.h"
#include "CoreRewardWidget.h"
#include "CurrencyProgressionRewardViewData.h"
#include "CoreCurrencyProgressionRewardWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreCurrencyProgressionRewardWidget : public UCoreRewardWidget {
    GENERATED_BODY()
public:
    UCoreCurrencyProgressionRewardWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetData(const FCurrencyProgressionRewardViewData& currencyProgressionRewardViewData);
    
};


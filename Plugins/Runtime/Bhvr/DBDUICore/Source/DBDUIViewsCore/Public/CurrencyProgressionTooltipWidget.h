#pragma once
#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "CurrencyProgressionTooltipViewData.h"
#include "CurrencyProgressionTooltipWidget.generated.h"

class UDBDTextBlock;
class UDBDRichTextBlock;
class UDBDImage;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCurrencyProgressionTooltipWidget : public UCoreBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export)
    UDBDTextBlock* CurrencyTB;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UDBDTextBlock* CurrencyTitleTB;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UDBDRichTextBlock* CurrencyDescriptionRTB;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UDBDImage* TitleBgIMG;
    
    UFUNCTION(BlueprintCallable)
    void SetTooltipData(const FCurrencyProgressionTooltipViewData& currencyViewData);
    
    UCurrencyProgressionTooltipWidget();
};


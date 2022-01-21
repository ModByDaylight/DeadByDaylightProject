#pragma once
#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "CustomizationTooltipViewData.h"
#include "CustomizationTooltipWidget.generated.h"

class UDBDTextBlock;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCustomizationTooltipWidget : public UCoreBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UDBDTextBlock* ToolTipStatusTB;
    
public:
    UCustomizationTooltipWidget();
    UFUNCTION(BlueprintImplementableEvent)
    void SetTooltipData(const FCustomizationTooltipViewData& customizationViewData);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetStatusText(const bool isEquipped, const bool isOwned, const bool isLocked);
    
};


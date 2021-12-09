#pragma once
#include "CoreMinimal.h"
#include "UMGBaseCurrencyButtonWidget.h"
#include "UMGPromoPackPurchaseCurrencyButtonWidget.generated.h"

class UTextBlock;
class UCanvasPanel;
class UOverlay;

UCLASS(Abstract, EditInlineNew)
class UUMGPromoPackPurchaseCurrencyButtonWidget : public UUMGBaseCurrencyButtonWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* PercentageDiscountText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* UndiscountedPrice;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* PercentageDiscountCanvas;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UOverlay* OverlayUndiscountedPrice;
    
public:
    UUMGPromoPackPurchaseCurrencyButtonWidget();
};


#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "Styling/SlateColor.h"
#include "UMGPurchaseCurrencyWidget.generated.h"

class UTextBlock;
class UImage;
class UOverlay;
class UCanvasPanel;

UCLASS(Abstract, EditInlineNew)
class UUMGPurchaseCurrencyWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* PercentageDiscountText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* CurrencyIcon;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* PriceText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* UndiscountedPrice;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* CurrencyColorImage;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UOverlay* OriginalPriceOverlay;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* DiscountCanvas;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateColor AffordableColor;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateColor NotAffordableColor;
    
public:
    UUMGPurchaseCurrencyWidget();
};


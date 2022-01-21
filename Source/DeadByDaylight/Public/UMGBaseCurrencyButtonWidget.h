#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UMGBaseButtonWidget.h"
#include "Styling/SlateColor.h"
#include "UMGBaseCurrencyButtonWidget.generated.h"

class UImage;
class UTextBlock;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGBaseCurrencyButtonWidget : public UUMGBaseButtonWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* FXImage;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* CurrencyColorImage;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* CurrencyIcon;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* PriceText;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateColor AffordableColor;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateColor NotAffordableColor;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor DisabledOpacity;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor EnabledOpacity;
    
public:
    UUMGBaseCurrencyButtonWidget();
};


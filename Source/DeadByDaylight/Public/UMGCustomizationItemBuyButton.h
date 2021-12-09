#pragma once
#include "CoreMinimal.h"
#include "UMGCustomizationItemPriceWidget.h"
#include "UObject/NoExportTypes.h"
#include "ECurrencyType.h"
#include "UObject/NoExportTypes.h"
#include "UMGCustomizationItemBuyButton.generated.h"

class UImage;

UCLASS(Abstract, EditInlineNew)
class UUMGCustomizationItemBuyButton : public UUMGCustomizationItemPriceWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* CurrencyColorStripe;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<ECurrencyType, FColor> _currencyStripeColors;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor _disabledOpacity;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor _enabledOpacity;
    
    UFUNCTION(BlueprintCallable)
    void BroadcastUnlockWithCurrency();
    
public:
    UUMGCustomizationItemBuyButton();
};


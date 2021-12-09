#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "Styling/SlateColor.h"
#include "ECurrencyType.h"
#include "UMGCustomizationItemPriceWidget.generated.h"

class UTexture2D;
class UTextBlock;
class UImage;

UCLASS(Abstract, EditInlineNew)
class UUMGCustomizationItemPriceWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* CurrencyValue;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* DiscountPercentageContainer;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* DiscountPercentage;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* CurrencyIcon;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<ECurrencyType, TSoftObjectPtr<UTexture2D>> CurrencyTextures;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateColor AffordableCurrencyTextColor;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateColor AffordableSpecialCurrencyTextColor;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateColor NonAffordableCurrencyTextColor;
    
    UPROPERTY(Transient)
    FString _itemId;
    
    UPROPERTY(Transient)
    ECurrencyType _currencyType;
    
    UPROPERTY(Transient)
    bool _hasDiscountPercentage;
    
public:
    UUMGCustomizationItemPriceWidget();
};


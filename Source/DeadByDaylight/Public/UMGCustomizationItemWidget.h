#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGCustomizationItemWidget.generated.h"

class UUMGCustomizationItemPriceWidget;
class UImage;
class UCanvasPanel;
class UVerticalBox;

UCLASS(Abstract, EditInlineNew)
class UUMGCustomizationItemWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* RarityBackground;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* PaintOverlay;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* Icon;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* NewIndicator;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* OutfitIndicator;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UVerticalBox* PricesContainer;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* ItemSelectedBorder;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* EquippedContainer;
    
    UPROPERTY(EditDefaultsOnly, NoClear)
    TSoftClassPtr<UUMGCustomizationItemPriceWidget> _customizationItemPriceWidgetClass;
    
private:
    UPROPERTY(Export, Transient)
    TArray<UUMGCustomizationItemPriceWidget*> _priceWidgets;
    
    UPROPERTY(Transient)
    int32 _itemIndex;
    
    UPROPERTY(Transient)
    FName _itemId;
    
public:
    UUMGCustomizationItemWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void BroadcastAvailableItemSelected();
    
};


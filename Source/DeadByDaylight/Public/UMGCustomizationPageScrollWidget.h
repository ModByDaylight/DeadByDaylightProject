#pragma once
#include "CoreMinimal.h"
#include "UMGGridPageScrollWidget.h"
#include "StoreItemSlotData.h"
#include "UMGCustomizationPageScrollWidget.generated.h"

class UUMGCustomizationItemWidget;

UCLASS(Abstract, EditInlineNew)
class UUMGCustomizationPageScrollWidget : public UUMGGridPageScrollWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly, NoClear)
    TSoftClassPtr<UUMGCustomizationItemWidget> _customizationItemWidgetClass;
    
    UPROPERTY(Transient)
    TArray<FStoreItemSlotData> _availableItemsData;
    
    UPROPERTY(Export, Transient)
    TArray<UUMGCustomizationItemWidget*> _itemWidgets;
    
public:
    UUMGCustomizationPageScrollWidget();
private:
    UFUNCTION()
    void OnAvailableItemSelectedCallback(int32 itemIndex);
    
};


#pragma once
#include "CoreMinimal.h"
#include "UMGLoadoutBaseWidget.h"
#include "EInventoryGridFormat.h"
#include "InventorySlotData.h"
#include "UMGLoadoutWidget.generated.h"

class UUMGLoadoutPageScrollWidget;

UCLASS(Abstract, EditInlineNew)
class UUMGLoadoutWidget : public UUMGLoadoutBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    FText InventoryItemTypeText;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FText InventoryFilterText;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGLoadoutPageScrollWidget* PageScrollWidget;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FText LoadoutTitleText;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FText InventoryPanelTitleText;
    
public:
    UUMGLoadoutWidget();
    UFUNCTION(BlueprintImplementableEvent)
    void SetInventoryData(EInventoryGridFormat gridFormat, const TArray<FInventorySlotData>& inventoryData, const TArray<int32>& selectedItemsIndexes, const FString& trackingItemName, const FString& subtitle);
    
};


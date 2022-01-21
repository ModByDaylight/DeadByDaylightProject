#pragma once
#include "CoreMinimal.h"
#include "UMGPageScrollWidget.h"
#include "EInventoryGridFormat.h"
#include "InventorySlotData.h"
#include "UMGLoadoutPageScrollWidget.generated.h"

class UUMGLoadoutItemButton;

UCLASS(EditInlineNew)
class UUMGLoadoutPageScrollWidget : public UUMGPageScrollWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    bool ShouldResizeWidget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear)
    TSoftClassPtr<UUMGLoadoutItemButton> _itemWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EInventoryGridFormat _gridFormat;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FInventorySlotData> _inventoryData;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<int32> _inventorySelectedItemIndexes;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString _subtitle;
    
public:
    UUMGLoadoutPageScrollWidget();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetItemWidgetClass();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetItemIsSelected(int32 index, bool isSelected);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetInventoryData(EInventoryGridFormat gridFormat, const TArray<FInventorySlotData>& inventoryData, const TArray<int32>& selectedItemsIndexes, const FString& trackingItemName, const FString& subtitle);
    
protected:
    UFUNCTION()
    void HandleItemClicked(FName itemID);
    
};


#pragma once
#include "CoreMinimal.h"
#include "UMGGenericPopup.h"
#include "Styling/SlateColor.h"
#include "UMGBloodStoreMysteryBoxPopup.generated.h"

class UUMGBloodStoreItemWidget;

UCLASS(Abstract, EditInlineNew)
class UUMGBloodStoreMysteryBoxPopup : public UUMGGenericPopup {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGBloodStoreItemWidget* MysteryItem;
    
    UPROPERTY(BlueprintReadOnly)
    FText _itemDisplayName;
    
    UPROPERTY(BlueprintReadOnly)
    FText _itemRarityName;
    
    UPROPERTY(BlueprintReadOnly)
    FSlateColor _itemRarityColor;
    
    UPROPERTY(BlueprintReadOnly)
    FText _addedToInventory;
    
public:
    UUMGBloodStoreMysteryBoxPopup();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void StartRevealSequence();
    
};


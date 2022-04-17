#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "EBloodStoreRowStyle.h"
#include "Layout/Margin.h"
#include "UMGBloodStoreRowWidget.generated.h"

class UHorizontalBox;
class UUMGBloodStoreItemWidget;
class UCanvasPanel;

UCLASS(Abstract, EditInlineNew)
class UUMGBloodStoreRowWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UHorizontalBox* ItemContainer;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* LockStatusPanel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* HardLockedStatusPanel;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _purchasedItemsNbr;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _requiredItemNbr;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EBloodStoreRowStyle _rowStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FMargin _itemPadding;
    
private:
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGBloodStoreItemWidget> _itemWidgetClass;
    
    UPROPERTY(Transient)
    UClass* _itemClass;
    
public:
    UUMGBloodStoreRowWidget();
    UFUNCTION(BlueprintImplementableEvent)
    void UnlockRow(bool playAnim);
    
    UFUNCTION(BlueprintImplementableEvent)
    void LockRow(bool playAnim);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BroadcastUnlockAnimationFinished();
    
private:
    UFUNCTION()
    void BroadcastBloodNodeSelected(const FString& id);
    
};


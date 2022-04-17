#pragma once
#include "CoreMinimal.h"
#include "UMGGenericPopup.h"
#include "UMGPerkSelectionPopup.generated.h"

class UUMGCharacterPrestigeIcon;
class UPerkSelectionSlotWidget;
class UImage;
class UCanvasPanel;
class UVerticalBox;
class URichTextBlock;

UCLASS(Abstract, EditInlineNew)
class UUMGPerkSelectionPopup : public UUMGGenericPopup {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UPerkSelectionSlotWidget* LargePerkSelectionSlot;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UPerkSelectionSlotWidget* FirstSmallSlot;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UPerkSelectionSlotWidget* SecondSmallSlot;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* PictureCharacterBackground;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* SelectablePerksContainer;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UPerkSelectionSlotWidget> UMGPerkSelectionSlotWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UVerticalBox* SmallSlotContainer;
    
    UPROPERTY(BlueprintReadOnly, Export)
    URichTextBlock* RewardSubTitle;
    
    UPROPERTY(BlueprintReadOnly, Export)
    URichTextBlock* PerkSelectionTitle;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* NoPerksContainer;
    
    UPROPERTY(BlueprintReadOnly, Export)
    URichTextBlock* AcquireMorePerksByText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    URichTextBlock* AcquireMorePerksByOption1Text;
    
    UPROPERTY(BlueprintReadOnly, Export)
    URichTextBlock* AcquireMorePerksByOption2Text;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGCharacterPrestigeIcon* PrestigeIcon;
    
private:
    UPROPERTY(Export, Transient)
    TArray<UPerkSelectionSlotWidget*> _selectablePerk;
    
public:
    UUMGPerkSelectionPopup();
private:
    UFUNCTION()
    void OnSlotSelected(const int32 index);
    
};


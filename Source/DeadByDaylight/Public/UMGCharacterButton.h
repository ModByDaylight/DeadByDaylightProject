#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "CharacterSlotData.h"
#include "UMGCharacterButton.generated.h"

class UImage;
class UUMGCharacterPrice;
class UCanvasPanel;
class UTextBlock;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGCharacterButton : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* PortraitIcon;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* CharacterSelectedPanel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* LevelPanel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* CharacterLevelText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* OwnedCustomizationText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* TotalCustomizationText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* PricePanel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGCharacterPrice* CellPrice;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGCharacterPrice* ShardPrice;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FCharacterSlotData CharacterSlotData;
    
public:
    UUMGCharacterButton();
    UFUNCTION(BlueprintCallable)
    void SetIsSelected(bool isSelected);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterData(const FCharacterSlotData& characterData);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastClickedEvent(int32 characterIndex);
    
};


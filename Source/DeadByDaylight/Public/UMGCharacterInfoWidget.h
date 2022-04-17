#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MobileBaseUserWidget.h"
#include "Styling/SlateColor.h"
#include "InventorySlotData.h"
#include "OnTeachableTooltipLongPressEventDelegate.h"
#include "OnLoadoutItemButtonLongPressEventDelegate.h"
#include "TeachableData.h"
#include "UMGCharacterInfoWidget.generated.h"

class UScrollBox;
class UUMGCharacterScrollingInfoWidget;
class UCanvasPanel;
class UImage;
class UTextBlock;

UCLASS(EditInlineNew)
class UUMGCharacterInfoWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UScrollBox* CharacterInfoScrollBox;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGCharacterScrollingInfoWidget* CharacterScrollingInfoWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* CharacterDLCPanel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* CharacterBackgroundImage;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* CharacterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear)
    FText _characterDifficultyText;
    
    UPROPERTY(BlueprintReadOnly)
    FString _characterDLCText;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isKiller;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor _easyColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor _intermediaryColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor _hardColor;
    
    UPROPERTY(BlueprintReadOnly)
    FSlateColor _currentColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear)
    FText _characterDLCTitle;
    
private:
    UPROPERTY()
    FOnTeachableTooltipLongPressEvent _onTeachableTooltipTriggeredLongPressEvent;
    
    UPROPERTY()
    FOnLoadoutItemButtonLongPressEvent _onPowerItemTooltipTriggeredLongPressEvent;
    
public:
    UUMGCharacterInfoWidget();
private:
    UFUNCTION()
    void HandleTooltipLongPressedEvent(const FTeachableData& teachableData, const FVector2D& position);
    
    UFUNCTION()
    void HandlePowerItemTooltipLongPressedEvent(const FInventorySlotData& slotData, FVector2D position);
    
};


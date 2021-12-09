#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "Styling/SlateColor.h"
#include "TeachableData.h"
#include "UObject/NoExportTypes.h"
#include "InventorySlotData.h"
#include "UMGCharacterInfoWidget.generated.h"

class UScrollBox;
class UUMGCharacterScrollingInfoWidget;
class UImage;
class UCanvasPanel;
class UTextBlock;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUMGCharacterInfoWidgetOnTeachableTooltipTriggeredLongPressEvent, const FTeachableData&, teachableData, const FVector2D&, position);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUMGCharacterInfoWidgetOnPowerItemTooltipTriggeredLongPressEvent, const FInventorySlotData&, itemSlotData, FVector2D, position);

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
    FUMGCharacterInfoWidgetOnTeachableTooltipTriggeredLongPressEvent _onTeachableTooltipTriggeredLongPressEvent;
    
    UPROPERTY()
    FUMGCharacterInfoWidgetOnPowerItemTooltipTriggeredLongPressEvent _onPowerItemTooltipTriggeredLongPressEvent;
    
    UFUNCTION()
    void HandleTooltipLongPressedEvent(const FTeachableData& teachableData, const FVector2D& position);
    
    UFUNCTION()
    void HandlePowerItemTooltipLongPressedEvent(const FInventorySlotData& slotData, FVector2D position);
    
public:
    UUMGCharacterInfoWidget();
};


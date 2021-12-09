#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "TeachableData.h"
#include "InventorySlotData.h"
#include "UMGCharacterScrollingInfoWidget.generated.h"

class UCanvasPanel;
class UUMGTeachablePerkButton;
class UUMGInventoryItemButton;
class UUMGHtmlRichText;
class UTextBlock;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUMGCharacterScrollingInfoWidgetOnTeachableTooltipTriggeredEvent, const FTeachableData&, teachableData, const FVector2D&, position);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUMGCharacterScrollingInfoWidgetOnPowerButtonTooltipLongPressEvent, const FInventorySlotData&, itemSlotData, FVector2D, position);

UCLASS(EditInlineNew)
class UUMGCharacterScrollingInfoWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGTeachablePerkButton* FirstTeachablePerk;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGTeachablePerkButton* SecondTeachablePerk;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGTeachablePerkButton* ThirdTeachablePerk;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* KillerInfoPanel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGInventoryItemButton* KillerPower;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGHtmlRichText* CharacterBackstoryBox;
    
    UPROPERTY(BlueprintReadOnly)
    FText _killerPowerName;
    
    UPROPERTY(BlueprintReadOnly)
    FText _killerSpeedText;
    
    UPROPERTY(BlueprintReadOnly)
    FText _killerTerrorRadiusText;
    
    UPROPERTY(BlueprintReadOnly)
    FText _killerHeightText;
    
    UPROPERTY(BlueprintReadOnly)
    FText _perksTitle;
    
    UPROPERTY(BlueprintReadOnly)
    FText _teachablesTitle;
    
    UPROPERTY(BlueprintReadOnly)
    FText _powerTitle;
    
    UPROPERTY(BlueprintReadOnly)
    FText _attributesTitle;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* FirstTeachablePerkText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* SecondTeachablePerkText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* ThirdTeachablePerkText;
    
    UPROPERTY(BlueprintReadOnly)
    FText _backStoryTitle;
    
private:
    UPROPERTY()
    FUMGCharacterScrollingInfoWidgetOnTeachableTooltipTriggeredEvent _onTeachableTooltipTriggeredEvent;
    
    UPROPERTY()
    FUMGCharacterScrollingInfoWidgetOnPowerButtonTooltipLongPressEvent _onPowerButtonTooltipLongPressEvent;
    
    UFUNCTION()
    void HandleTooltipLongPressedKillerPowerEvent(const FInventorySlotData& itemData, FVector2D position);
    
    UFUNCTION()
    void HandleTooltipLongPressedEvent(const FTeachableData& teachableData, const FVector2D& position);
    
public:
    UUMGCharacterScrollingInfoWidget();
};


#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "TeachableData.h"
#include "InventorySlotData.h"
#include "UObject/NoExportTypes.h"
#include "UMGCharacterInfoScreen.generated.h"

class UUMGCharacterInfoWidget;
class UCanvasPanel;
class UUMGPopupButton;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUMGCharacterInfoScreenOnTeachableTooltipTriggeredLongPressEvent, const FTeachableData&, teachableData, const FVector2D&, position);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUMGCharacterInfoScreenOnPowerItemTooltipTriggeredLongPressEvent, const FInventorySlotData&, itemSlotData, FVector2D, position);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUMGCharacterInfoScreenOnProgressionButtonClickEvent);

UCLASS(Abstract, EditInlineNew)
class UUMGCharacterInfoScreen : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* ContentPanel;
    
    UPROPERTY(EditDefaultsOnly, NoClear)
    TSoftClassPtr<UUMGCharacterInfoWidget> SurvivorInfoWidgetClass;
    
    UPROPERTY(EditDefaultsOnly, NoClear)
    TSoftClassPtr<UUMGCharacterInfoWidget> KillerInfoWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGPopupButton* ProgressionButton;
    
private:
    UPROPERTY()
    FUMGCharacterInfoScreenOnTeachableTooltipTriggeredLongPressEvent _onTeachableTooltipTriggeredLongPressEvent;
    
    UPROPERTY()
    FUMGCharacterInfoScreenOnPowerItemTooltipTriggeredLongPressEvent _onPowerItemTooltipTriggeredLongPressEvent;
    
    UPROPERTY()
    FUMGCharacterInfoScreenOnProgressionButtonClickEvent _onProgressionButtonClickEvent;
    
    UFUNCTION()
    void HandleTeachablePerkTooltipLongPressedEvent(const FTeachableData& teachableData, const FVector2D& position);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleProgressionButtonClickEvent();
    
private:
    UFUNCTION()
    void HandlePowerItemTooltipLongPressedEvent(const FInventorySlotData& slotData, FVector2D position);
    
public:
    UUMGCharacterInfoScreen();
};


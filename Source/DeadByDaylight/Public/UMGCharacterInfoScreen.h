#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "OnButtonClickEvent.h"
#include "OnLoadoutItemButtonLongPressEvent.h"
#include "OnTeachableTooltipLongPressEvent.h"
#include "TeachableData.h"
#include "UObject/NoExportTypes.h"
#include "InventorySlotData.h"
#include "UMGCharacterInfoScreen.generated.h"

class UUMGPopupButton;
class UUMGCharacterInfoWidget;
class UCanvasPanel;

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
    FOnTeachableTooltipLongPressEvent _onTeachableTooltipTriggeredLongPressEvent;
    
    UPROPERTY()
    FOnLoadoutItemButtonLongPressEvent _onPowerItemTooltipTriggeredLongPressEvent;
    
    UPROPERTY()
    FOnButtonClickEvent _onProgressionButtonClickEvent;
    
public:
    UUMGCharacterInfoScreen();
private:
    UFUNCTION()
    void HandleTeachablePerkTooltipLongPressedEvent(const FTeachableData& teachableData, const FVector2D& position);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleProgressionButtonClickEvent();
    
private:
    UFUNCTION()
    void HandlePowerItemTooltipLongPressedEvent(const FInventorySlotData& slotData, FVector2D position);
    
};


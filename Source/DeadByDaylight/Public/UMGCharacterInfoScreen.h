#pragma once
#include "CoreMinimal.h"
#include "OnButtonClickEventDelegate.h"
#include "UObject/NoExportTypes.h"
#include "MobileBaseUserWidget.h"
#include "InventorySlotData.h"
#include "OnTeachableTooltipLongPressEventDelegate.h"
#include "TeachableData.h"
#include "OnLoadoutItemButtonLongPressEventDelegate.h"
#include "UMGCharacterInfoScreen.generated.h"

class UUMGPopupButton;
class UCanvasPanel;
class UUMGCharacterInfoWidget;

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


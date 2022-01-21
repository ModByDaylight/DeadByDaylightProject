#pragma once
#include "CoreMinimal.h"
#include "UMGLoadoutBaseWidget.h"
#include "TooltipPressedData.h"
#include "ECurrencyType.h"
#include "UMGLobbySearchingWidget.generated.h"

class UButton;
class UUMGBankAndPlayerInfoWidget;
class UUMGPartySlotsWidget;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGLobbySearchingWidget : public UUMGLoadoutBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGBankAndPlayerInfoWidget* BankAndPlayerInfoWidget;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FText ItemOrPowerText;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FText AddonText;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FText OfferingText;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FText PerksText;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FText TextWaitingForPlayers;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FText TextEstimatedTimeTitle;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UButton* ButtonCancelSearching;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGPartySlotsWidget* PartySlots;
    
public:
    UUMGLobbySearchingWidget();
    UFUNCTION(BlueprintImplementableEvent)
    void SetWaitingTimer(int32 seconds);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetEstimatedWaitingTimer(int32 seconds);
    
protected:
    UFUNCTION()
    void OnRankTooltipTriggered(const FTooltipPressedData& tooltipPressedData);
    
    UFUNCTION()
    void OnLevelTooltipTriggered(const FTooltipPressedData& tooltipPressedData);
    
    UFUNCTION()
    void OnCurrencyTooltipTriggered(const FTooltipPressedData& tooltipPressedData, ECurrencyType currencyType);
    
    UFUNCTION()
    void HandleLeaveButtonClicked();
    
};


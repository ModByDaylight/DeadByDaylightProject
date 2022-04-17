#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "EActionButtonState.h"
#include "ERadialProgressBarType.h"
#include "PowerButton.generated.h"

class UUMGInventoryItemButton;
class UActionButton;
class UCanvasPanel;
class UTextBlock;
class UProgressBar;
class UImage;

UCLASS(EditInlineNew)
class UPowerButton : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UActionButton* Button;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* SwitchIcon;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* CountContainer;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* RadialProgressBarContainer;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* CountLabel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* TierImage;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* AddonsContainer;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGInventoryItemButton* FirstAddonSlot;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGInventoryItemButton* SecondAddonSlot;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UProgressBar* FillPowerChargeProgression;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DisabledOpacity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float EnabledOpacity;
    
    UPROPERTY(BlueprintReadOnly)
    bool EnabledLongPressed;
    
    UPROPERTY(Transient)
    int32 _itemCount;
    
public:
    UPowerButton();
    UFUNCTION(BlueprintCallable)
    void SetSwitchIconActive(bool active);
    
    UFUNCTION(BlueprintCallable)
    void SetState(EActionButtonState state);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetRadialProgressPercentage(const float progression, ERadialProgressBarType progressBarType);
    
    UFUNCTION(BlueprintCallable)
    void SetRadialProgressBarActice(bool active);
    
    UFUNCTION(BlueprintCallable)
    void SetPowerIntensityOpacity(float opacity);
    
    UFUNCTION(BlueprintCallable)
    void SetFillProgressPercentage(const float chargeProgressionPercentage);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTierChanged(int32 previousTier, int32 currentTier, bool isFirstTime);
    
    UFUNCTION(BlueprintCallable)
    bool IsRadialProgressBarActive();
    
    UFUNCTION(BlueprintCallable)
    UActionButton* GetActionButton();
    
};


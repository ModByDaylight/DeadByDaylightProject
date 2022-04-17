#pragma once
#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "UObject/NoExportTypes.h"
#include "EUMGDailyRewardWidgetState.h"
#include "OnIntegerIntegerGenericEventDelegate.h"
#include "UMGDailyRewardWidget.generated.h"

class UImage;
class UWidgetSwitcher;
class UTextBlock;
class UCanvasPanel;

UCLASS(Abstract, EditInlineNew)
class UUMGDailyRewardWidget : public UUMGBaseButtonWidget {
    GENERATED_BODY()
public:
    UPROPERTY()
    FOnIntegerIntegerGenericEvent OnDailyRewardStateChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    bool IsMarkedSpecial;
    
    UPROPERTY(BlueprintReadOnly)
    EUMGDailyRewardWidgetState State;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* AmountText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* ItemNameText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* RewardNumberText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UWidgetSwitcher* RewardTypeSwitcher;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* ItemInfoPanel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* OfferingInfoPanel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* GenericInfoPanel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* FreeTicketInfoPanel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* CrateKeyInfoPanel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* ItemIcon;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* OfferingIcon;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* GenericRewardIcon;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* FreeTicketRewardIcon;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* ParentItemIcon;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* CrateKeyRewardIcon;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* ParentItemPanel;
    
public:
    UUMGDailyRewardWidget();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void StopIdleAnimationForState(const EUMGDailyRewardWidgetState inState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetStateVisuals(const EUMGDailyRewardWidgetState inState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetRarityColors(FColor backgroundColor, FColor tintColor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayIdleAnimationForState(const EUMGDailyRewardWidgetState inState);
    
    UFUNCTION(BlueprintCallable)
    void HandleUnlockRewardAnimationFinished();
    
    UFUNCTION(BlueprintCallable)
    void HandleUnlockMysteryRewardAnimationFinished();
    
    UFUNCTION(BlueprintCallable)
    void HandleDiscoverRewardAnimationFinished();
    
    UFUNCTION(BlueprintCallable)
    void HandleCollectRewardAnimationFinished();
    
    UFUNCTION(BlueprintCallable)
    void HandleCollectButtonClick();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DiscoverMysteryReward();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CollectReward();
    
};


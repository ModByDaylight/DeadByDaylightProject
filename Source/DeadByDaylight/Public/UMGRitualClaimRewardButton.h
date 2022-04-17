#pragma once
#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "UMGRitualClaimRewardButton.generated.h"

class UCanvasPanel;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGRitualClaimRewardButton : public UUMGBaseButtonWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPressedAnimationCompleted);
    
    UPROPERTY(BlueprintAssignable)
    FOnPressedAnimationCompleted OnPressedAnimationCompleted;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* ClaimFxPanel;
    
public:
    UUMGRitualClaimRewardButton();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetClaimedButtonStatus(bool isClaimed, float percent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BroadcastOnPressedAnimationCompleted();
    
};


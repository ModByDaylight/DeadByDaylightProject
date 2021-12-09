#pragma once
#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "UMGRitualClaimRewardButton.generated.h"

class UCanvasPanel;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUMGRitualClaimRewardButtonOnPressedAnimationCompleted);

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGRitualClaimRewardButton : public UUMGBaseButtonWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FUMGRitualClaimRewardButtonOnPressedAnimationCompleted OnPressedAnimationCompleted;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* ClaimFxPanel;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetClaimedButtonStatus(bool isClaimed, float percent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BroadcastOnPressedAnimationCompleted();
    
public:
    UUMGRitualClaimRewardButton();
};


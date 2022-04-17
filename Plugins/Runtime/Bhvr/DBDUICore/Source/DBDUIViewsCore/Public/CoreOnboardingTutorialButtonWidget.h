#pragma once
#include "CoreMinimal.h"
#include "CoreButtonWidget.h"
#include "OnSetDataAnimationCompleteDelegateDelegate.h"
#include "OnboardingTutorialButtonViewData.h"
#include "CoreOnboardingTutorialButtonWidget.generated.h"

class UAkAudioEvent;
class UCoreRewardWrapperWidget;
class UDBDTextBlock;
class UDBDImage;
class UWidgetSwitcher;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreOnboardingTutorialButtonWidget : public UCoreButtonWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintCallable)
    FOnSetDataAnimationCompleteDelegate OnSetDataAnimationCompleteDelegate;
    
    UPROPERTY(EditAnywhere)
    FString UnavailablePressedSfxName;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* UnavailablePressedSfx;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UDBDTextBlock* TitleText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UDBDTextBlock* DescriptionText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UDBDTextBlock* RewardsText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UDBDImage* RoleIcon;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UWidgetSwitcher* StateSwitcher;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UDBDImage* LockedImage;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UDBDImage* CompletedImage;
    
    UPROPERTY(BlueprintReadWrite, Export)
    TArray<UCoreRewardWrapperWidget*> RewardWrappers;
    
    UPROPERTY(BlueprintReadWrite)
    FOnboardingTutorialButtonViewData ViewData;
    
public:
    UCoreOnboardingTutorialButtonWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void SetVisual();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void SetUIEnabled(bool enabled);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetData(const FOnboardingTutorialButtonViewData& NewViewData, bool isRefreshingWithAnimation);
    
private:
    UFUNCTION()
    void OnRewardReleased(UCoreButtonWidget* buttonTarget);
    
    UFUNCTION()
    void OnRewardPressed(UCoreButtonWidget* buttonTarget);
    
    UFUNCTION()
    void OnRewardClicked(UCoreButtonWidget* buttonTarget);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsInUnavailableStep() const;
    
};


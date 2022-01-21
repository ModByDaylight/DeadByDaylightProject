#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "OnboardingStepViewData.h"
#include "RewardWrapperViewData.h"
#include "OnboardingTutorialViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UOnboardingTutorialViewInterface : public UInterface {
    GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IOnboardingTutorialViewInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateProgress(const TArray<FOnboardingStepViewData>& before, const TArray<FOnboardingStepViewData>& after, const TArray<FRewardWrapperViewData>& rewards);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopLoadingSpinner();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetUIEnabled(bool enabled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTutorialProgressionFeedbacks(const FString& completedStepId, const bool isOnboardingEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetProgress(const TArray<FOnboardingStepViewData>& progress);
    
};


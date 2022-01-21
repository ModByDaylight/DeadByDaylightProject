#pragma once
#include "CoreMinimal.h"
#include "SubPresenter.h"
#include "OnboardingTutorialSubPresenter.generated.h"

class UOnboardingTutorialViewInterface;
class IOnboardingTutorialViewInterface;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDUIPRESENTERS_API UOnboardingTutorialSubPresenter : public USubPresenter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TScriptInterface<IOnboardingTutorialViewInterface> _onboardingTutorialWidget;
    
public:
    UOnboardingTutorialSubPresenter();
private:
    UFUNCTION()
    void OnSelectTutorial(const FString& stepId, const FString& tutorialId);
    
};


#pragma once
#include "CoreMinimal.h"
#include "SubPresenter.h"
#include "OnboardingTutorialSubPresenter.generated.h"

class UOnboardingTutorialViewInterface;
class IOnboardingTutorialViewInterface;

UCLASS()
class DBDUIPRESENTERS_API UOnboardingTutorialSubPresenter : public USubPresenter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TScriptInterface<IOnboardingTutorialViewInterface> _onboardingTutorialWidget;
    
    UFUNCTION()
    void OnSelectTutorial(const FString& stepId, const FString& tutorialId);
    
public:
    UOnboardingTutorialSubPresenter();
};


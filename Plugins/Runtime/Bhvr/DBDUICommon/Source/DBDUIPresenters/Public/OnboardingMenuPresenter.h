#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Presenter.h"
#include "EOnboardingMenuState.h"
#include "OnboardingMenuPresenter.generated.h"

class UOnboardingTutorialSubPresenter;
class UUserWidget;
class UGameManualSubPresenter;
class USubPresenter;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DBDUIPRESENTERS_API UOnboardingMenuPresenter : public UPresenter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UUserWidget> OnboardingMenuWidgetClass;
    
private:
    UPROPERTY(Export, Transient)
    UOnboardingTutorialSubPresenter* _onboardingTutorialSubPresenter;
    
    UPROPERTY(Export, Transient)
    UGameManualSubPresenter* _gameManualSubPresenter;
    
    UPROPERTY(Export, Transient)
    USubPresenter* _activeSubPresenter;
    
public:
    UOnboardingMenuPresenter();
private:
    UFUNCTION()
    void OnSetUIEnabled(bool enabled);
    
    UFUNCTION()
    void OnMenuTabSelectedAgain(EOnboardingMenuState onboardingMenuState);
    
    UFUNCTION()
    void OnMenuTabSelected(EOnboardingMenuState onboardingMenuState);
    
    UFUNCTION()
    void OnBackAction();
    
};


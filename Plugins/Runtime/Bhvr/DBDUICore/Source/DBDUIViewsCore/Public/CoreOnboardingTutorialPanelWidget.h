#pragma once
#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "PendingStepData.h"
#include "OnboardingTutorialViewInterface.h"
#include "CoreOnboardingTutorialPanelWidget.generated.h"

class UCoreOnboardingTutorialButtonWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCoreOnboardingTutorialPanelWidgetTutorialSelectedDelegate, const FString&, stepId, const FString&, tutorialId);

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreOnboardingTutorialPanelWidget : public UCoreBaseUserWidget, public IOnboardingTutorialViewInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    TArray<UCoreOnboardingTutorialButtonWidget*> TutorialButtons;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FCoreOnboardingTutorialPanelWidgetTutorialSelectedDelegate TutorialSelectedDelegate;
    
private:
    UPROPERTY(Transient)
    TArray<FPendingStepData> _pendingData;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetTutorialSeparators(const FString& completedStepId);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTutorialDescription(const FText& description, bool isWarning);
    
private:
    UFUNCTION()
    void NextPendingButtonUpdated();
    
    UFUNCTION()
    void CheckNextPendingButtonUpdate();
    
public:
    UCoreOnboardingTutorialPanelWidget();
};


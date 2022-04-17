#pragma once
#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "OnboardingTutorialViewInterface.h"
#include "TutorialSelectedDelegateDelegate.h"
#include "PendingStepData.h"
#include "CoreOnboardingTutorialPanelWidget.generated.h"

class UCoreOnboardingTutorialButtonWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreOnboardingTutorialPanelWidget : public UCoreBaseUserWidget, public IOnboardingTutorialViewInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    TArray<UCoreOnboardingTutorialButtonWidget*> TutorialButtons;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FTutorialSelectedDelegate TutorialSelectedDelegate;
    
private:
    UPROPERTY(Transient)
    TArray<FPendingStepData> _pendingData;
    
public:
    UCoreOnboardingTutorialPanelWidget();
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
    
    
    // Fix for true pure virtual functions not being implemented
};


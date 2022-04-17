#pragma once
#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "BackActionDelegateDelegate.h"
#include "OnboardingMenuViewInterface.h"
#include "MenuTabSelectedAgainDelegateDelegate.h"
#include "MenuTabSelectedDelegateDelegate.h"
#include "CoreOnboardingMenuWidget.generated.h"

class UCoreInputSwitcherWidget;
class UCoreTabContainerWidget;
class UCoreOnboardingMenuTitleWidget;
class UCoreSelectableButtonWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreOnboardingMenuWidget : public UCoreBaseUserWidget, public IOnboardingMenuViewInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export)
    UCoreTabContainerWidget* OnboardingMenuTabs;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UCoreOnboardingMenuTitleWidget* MenuTitle;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCoreInputSwitcherWidget* BackInputSwitcher;
    
private:
    UPROPERTY(BlueprintCallable)
    FBackActionDelegate BackActionDelegate;
    
    UPROPERTY(BlueprintCallable)
    FMenuTabSelectedDelegate MenuTabSelectedDelegate;
    
    UPROPERTY(BlueprintCallable)
    FMenuTabSelectedAgainDelegate MenuTabSelectedAgainDelegate;
    
public:
    UCoreOnboardingMenuWidget();
private:
    UFUNCTION(BlueprintCallable)
    void SetTitleText(const bool isInTutorial);
    
    UFUNCTION(BlueprintCallable)
    void SetBackButtonText(const bool isFTUE);
    
    UFUNCTION()
    void OnMenuTabSelectedAgain(UCoreSelectableButtonWidget* selectedButton);
    
    UFUNCTION()
    void OnMenuTabSelected(UCoreSelectableButtonWidget* selectedButton);
    
    
    // Fix for true pure virtual functions not being implemented
};


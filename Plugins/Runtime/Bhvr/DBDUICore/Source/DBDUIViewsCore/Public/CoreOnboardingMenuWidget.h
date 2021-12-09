#pragma once
#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "OnboardingMenuViewInterface.h"
#include "EOnboardingMenuState.h"
#include "CoreOnboardingMenuWidget.generated.h"

class UCoreButtonPromptWidget;
class UCoreSelectableButtonWidget;
class UCoreTabContainerWidget;
class UCoreOnboardingMenuTitleWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCoreOnboardingMenuWidgetMenuTabSelectedAgainDelegate, EOnboardingMenuState, selectedTabIndex);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCoreOnboardingMenuWidgetMenuTabSelectedDelegate, EOnboardingMenuState, selectedTabIndex);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCoreOnboardingMenuWidgetBackActionDelegate);

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
    UCoreButtonPromptWidget* BackButton;
    
private:
    UPROPERTY(BlueprintCallable)
    FCoreOnboardingMenuWidgetBackActionDelegate BackActionDelegate;
    
    UPROPERTY(BlueprintCallable)
    FCoreOnboardingMenuWidgetMenuTabSelectedDelegate MenuTabSelectedDelegate;
    
    UPROPERTY(BlueprintCallable)
    FCoreOnboardingMenuWidgetMenuTabSelectedAgainDelegate MenuTabSelectedAgainDelegate;
    
    UFUNCTION(BlueprintCallable)
    void SetTitleText(const bool isInTutorial);
    
    UFUNCTION(BlueprintCallable)
    void SetBackButtonText(const bool isFTUE);
    
    UFUNCTION()
    void OnMenuTabSelectedAgain(UCoreSelectableButtonWidget* selectedButton);
    
    UFUNCTION()
    void OnMenuTabSelected(UCoreSelectableButtonWidget* selectedButton);
    
public:
    UCoreOnboardingMenuWidget();
};


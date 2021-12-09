#pragma once
#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "EInputSwitcherDisplayRule.h"
#include "EUIActionType.h"
#include "CoreInputSwitcherWidget.generated.h"

class UCoreKeyListenerInputPromptWidget;
class UCoreButtonWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCoreInputSwitcherWidgetOnInputSwitcherTriggeredDelegate);

UCLASS(EditInlineNew)
class UCoreInputSwitcherWidget : public UCoreBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    EInputSwitcherDisplayRule ButtonDisplayRule;
    
    UPROPERTY(EditDefaultsOnly)
    EInputSwitcherDisplayRule InputPromptDisplayRule;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UCoreKeyListenerInputPromptWidget* InputPrompt;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCoreButtonWidget* Button;
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FCoreInputSwitcherWidgetOnInputSwitcherTriggeredDelegate _onInputSwitcherTriggeredDelegate;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetUIAction(const EUIActionType actionType);
    
    UFUNCTION(BlueprintCallable)
    void SetLabel(const FText& label);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool isEnabled);
    
private:
    UFUNCTION()
    void OnInputPromptTriggered();
    
    UFUNCTION()
    void OnButtonClicked(UCoreButtonWidget* target);
    
public:
    UFUNCTION(BlueprintCallable)
    UCoreKeyListenerInputPromptWidget* GetInputPrompt();
    
    UFUNCTION(BlueprintCallable)
    UCoreButtonWidget* GetButton();
    
    UCoreInputSwitcherWidget();
};


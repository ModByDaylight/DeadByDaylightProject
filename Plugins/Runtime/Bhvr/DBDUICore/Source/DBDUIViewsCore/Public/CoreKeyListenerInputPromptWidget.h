#pragma once
#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "OnKeyListenerInputPromptTriggeredDelegateDelegate.h"
#include "EUIActionType.h"
#include "CoreKeyListenerInputPromptWidget.generated.h"

class UCoreInputPromptWidget;
class UDBDTextBlock;

UCLASS(EditInlineNew)
class UCoreKeyListenerInputPromptWidget : public UCoreBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UCoreInputPromptWidget* InputPrompt;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UDBDTextBlock* LabelTB;
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnKeyListenerInputPromptTriggeredDelegate _onKeyListenerInputPromptTriggeredDelegate;
    
public:
    UCoreKeyListenerInputPromptWidget();
    UFUNCTION(BlueprintCallable)
    void SetUIAction(const EUIActionType actionType);
    
    UFUNCTION(BlueprintCallable)
    void SetLabel(const FText& label);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool NewIsEnabled);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnEnabledChanged(bool NewIsEnabled);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsEnabled();
    
};


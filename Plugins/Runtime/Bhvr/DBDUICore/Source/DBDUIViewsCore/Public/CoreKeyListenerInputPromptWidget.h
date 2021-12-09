#pragma once
#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "EUIActionType.h"
#include "CoreKeyListenerInputPromptWidget.generated.h"

class UCoreInputPromptWidget;
class UDBDTextBlock;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCoreKeyListenerInputPromptWidgetOnKeyListenerInputPromptTriggeredDelegate);

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
    FCoreKeyListenerInputPromptWidgetOnKeyListenerInputPromptTriggeredDelegate _onKeyListenerInputPromptTriggeredDelegate;
    
public:
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
    
    UCoreKeyListenerInputPromptWidget();
};


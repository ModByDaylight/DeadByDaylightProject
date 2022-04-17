#pragma once
#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "ButtonPromptTriggeredDelegateDelegate.h"
#include "InputCoreTypes.h"
#include "EUIActionType.h"
#include "CoreButtonPromptWidget.generated.h"

class UAkAudioEvent;
class UCoreInputPromptTextWidget;
class UTextBlock;

UCLASS(EditInlineNew)
class UCoreButtonPromptWidget : public UCoreBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* CursorOverSfx;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* CursorPressSfx;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* CursorReleaseSfx;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UCoreInputPromptTextWidget* _inputPromptText;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UTextBlock* _buttonTextField;
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FButtonPromptTriggeredDelegate _buttonPromptTriggeredDelegate;
    
public:
    UCoreButtonPromptWidget();
    UFUNCTION(BlueprintCallable)
    void SetText(const FText& text);
    
    UFUNCTION(BlueprintCallable)
    void SetInputKey(const FKey& key);
    
    UFUNCTION(BlueprintCallable)
    void SetAction(const EUIActionType actionType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnablePrompts();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisablePrompts();
    
};


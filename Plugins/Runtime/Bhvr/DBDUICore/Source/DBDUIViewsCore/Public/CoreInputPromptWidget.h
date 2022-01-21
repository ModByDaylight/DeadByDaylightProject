#pragma once
#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "InputCoreTypes.h"
#include "CoreInputPromptWidget.generated.h"

UCLASS(EditInlineNew)
class UCoreInputPromptWidget : public UCoreBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText _unfoundInputKeyText;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey _inputKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isEnabled;
    
public:
    UCoreInputPromptWidget();
    UFUNCTION(BlueprintCallable)
    void SetInputKey(const FKey& inputKey);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool NewIsEnabled);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PromptNotFound();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEnabledChanged(bool NewIsEnabled);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsEnabled();
    
protected:
    UFUNCTION(BlueprintPure)
    FText GetInputShortDisplayName() const;
    
public:
    UFUNCTION(BlueprintPure)
    FKey GetInputKey();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void DisplayPrompt();
    
};


#pragma once
#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "InputCoreTypes.h"
#include "CoreInteractionPromptActionWidget.generated.h"

class UCoreInputPromptWidget;

UCLASS(EditInlineNew)
class UCoreInteractionPromptActionWidget : public UCoreBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UCoreInputPromptWidget* InputPrompt;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCoreInputPromptWidget* InputPrompt2;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCoreInputPromptWidget* InputPrompt3;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCoreInputPromptWidget* InputPrompt4;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName IdleAnimationName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey InputKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey InputKey2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey InputKey3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey InputKey4;
    
public:
    UCoreInteractionPromptActionWidget();
    UFUNCTION(BlueprintCallable)
    void StopIdleAnimation();
    
    UFUNCTION(BlueprintCallable)
    void SetInputKey4(const FKey& NewInputKey4);
    
    UFUNCTION(BlueprintCallable)
    void SetInputKey3(const FKey& NewInputKey3);
    
    UFUNCTION(BlueprintCallable)
    void SetInputKey2(const FKey& NewInputKey2);
    
    UFUNCTION(BlueprintCallable)
    void SetInputKey(const FKey& NewInputKey);
    
    UFUNCTION(BlueprintCallable)
    void PlayIdleAnimation();
    
    UFUNCTION(BlueprintPure)
    bool HasThirdPrompt() const;
    
    UFUNCTION(BlueprintPure)
    bool HasSecondPrompt() const;
    
    UFUNCTION(BlueprintPure)
    bool HasFourthPrompt() const;
    
};


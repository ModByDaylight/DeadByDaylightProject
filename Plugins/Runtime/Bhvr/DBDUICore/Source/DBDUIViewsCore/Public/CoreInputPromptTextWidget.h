#pragma once
#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "InputCoreTypes.h"
#include "CoreInputPromptTextWidget.generated.h"

class UTextBlock;
class UCoreInputPromptWidget;

UCLASS(EditInlineNew)
class UCoreInputPromptTextWidget : public UCoreBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UCoreInputPromptWidget* InputPrompt;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* TextField;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey InputKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
public:
    UCoreInputPromptTextWidget();
    UFUNCTION(BlueprintCallable)
    void SetText(const FText& NewText);
    
    UFUNCTION(BlueprintCallable)
    void SetInputKey(const FKey& NewInputKey);
    
};


#pragma once
#include "CoreMinimal.h"
#include "GenericPopupScreen.h"
#include "GenericTextInputPopupScreen.generated.h"

UCLASS()
class UGenericTextInputPopupScreen : public UGenericPopupScreen {
    GENERATED_BODY()
public:
    UGenericTextInputPopupScreen();
private:
    UFUNCTION()
    void OnTextInputChoiceSelected(int32 selectedButtonType, const FString& inputText);
    
};


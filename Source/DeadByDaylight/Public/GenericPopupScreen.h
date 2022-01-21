#pragma once
#include "CoreMinimal.h"
#include "BasePopupScreen.h"
#include "GenericPopupScreen.generated.h"

class UUMGGenericPopup;

UCLASS()
class UGenericPopupScreen : public UBasePopupScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    UUMGGenericPopup* _popup;
    
public:
    UGenericPopupScreen();
private:
    UFUNCTION()
    void OnChoiceSelected(int32 selectedButtonType);
    
};


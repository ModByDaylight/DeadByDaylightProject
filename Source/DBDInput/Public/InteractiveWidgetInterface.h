#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "UObject/Interface.h"
#include "Input/Events.h"
#include "InteractiveWidgetInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDINPUT_API UInteractiveWidgetInterface : public UInterface {
    GENERATED_BODY()
};

class DBDINPUT_API IInteractiveWidgetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    void HandleKeyUpEvent(const FKeyEvent& InKeyEvent);
    
    UFUNCTION(BlueprintNativeEvent)
    void HandleKeyHoldEvent(const FKeyEvent& InKeyEvent);
    
    UFUNCTION(BlueprintNativeEvent)
    void HandleKeyDownEvent(const FKeyEvent& InKeyEvent);
    
    UFUNCTION(BlueprintNativeEvent)
    void HandleAnalogInputEvent(const FAnalogInputEvent& InAnalogInputEvent);
    
};


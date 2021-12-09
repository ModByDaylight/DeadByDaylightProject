#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CoreBaseViewInterface.h"
#include "InteractiveWidgetInterface.h"
#include "EControlMode.h"
#include "EScaleType.h"
#include "CoreBaseUserWidget.generated.h"

class UDBDInputManager;
class UScaleBox;

UCLASS(Abstract, EditInlineNew)
class UCoreBaseUserWidget : public UUserWidget, public ICoreBaseViewInterface, public IInteractiveWidgetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export)
    UScaleBox* ScaleContainer;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool IsInteractive;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EControlMode _controlMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EScaleType ScaleType;
    
private:
    UPROPERTY(Transient)
    UDBDInputManager* _inputManager;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateScale(float scale);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RegisterForInput();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnControlModeChangedBP(EControlMode controlMode);
    
    UFUNCTION(BlueprintCallable)
    void DeregisterFromInput();
    
public:
    UCoreBaseUserWidget();
};


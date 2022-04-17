#pragma once
#include "CoreMinimal.h"
#include "EControlMode.h"
#include "Blueprint/UserWidget.h"
#include "CoreBaseViewInterface.h"
#include "InteractiveWidgetInterface.h"
#include "EScaleType.h"
#include "CoreBaseUserWidget.generated.h"

class UDBDInputManager;
class UScaleBox;
class UWidgetAnimation;

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
    
    UPROPERTY(Transient)
    TMap<FName, UWidgetAnimation*> _animationMap;
    
public:
    UCoreBaseUserWidget();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateScale(float scale);
    
    UFUNCTION(BlueprintCallable)
    void RegisterForInput();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnControlModeChangedBP(EControlMode controlMode);
    
public:
    UFUNCTION(BlueprintCallable)
    void DeregisterFromInput();
    
    
    // Fix for true pure virtual functions not being implemented
};


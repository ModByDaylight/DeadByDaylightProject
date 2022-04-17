#pragma once
#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "ButtonPressTracker.generated.h"

class UPlayerInput;
class UInputComponent;

UCLASS()
class UButtonPressTracker : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UInputComponent> _trackedInputComponent;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UPlayerInput> _playerInput;
    
public:
    UButtonPressTracker();
};


#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InputMasher.generated.h"

class UInputComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class INPUTUTILITIES_API UInputMasher : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UInputComponent* _inputComponent;
    
public:
    UInputMasher();
};


#pragma once
#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "WalesCypherHandler.generated.h"

class UWalesCypherParameters;

UCLASS()
class UWalesCypherHandler : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UWalesCypherParameters* _walesCypherParams;
    
public:
    UWalesCypherHandler();
};


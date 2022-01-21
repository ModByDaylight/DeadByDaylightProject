#pragma once
#include "CoreMinimal.h"
#include "StateMachine.h"
#include "FirecrackerStateMachine.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UFirecrackerStateMachine : public UStateMachine {
    GENERATED_BODY()
public:
    UFirecrackerStateMachine();
};


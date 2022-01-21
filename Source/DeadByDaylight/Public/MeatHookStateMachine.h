#pragma once
#include "CoreMinimal.h"
#include "StateMachine.h"
#include "MeatHookStateMachine.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UMeatHookStateMachine : public UStateMachine {
    GENERATED_BODY()
public:
    UMeatHookStateMachine();
};


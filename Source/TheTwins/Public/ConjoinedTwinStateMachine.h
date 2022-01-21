#pragma once
#include "CoreMinimal.h"
#include "PlayerStateMachine.h"
#include "ConjoinedTwinStateMachine.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UConjoinedTwinStateMachine : public UPlayerStateMachine {
    GENERATED_BODY()
public:
    UConjoinedTwinStateMachine();
};


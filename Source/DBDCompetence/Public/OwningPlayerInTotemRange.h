#pragma once
#include "CoreMinimal.h"
#include "AnyActorPairQueryRangeIsTrue.h"
#include "OwningPlayerInTotemRange.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UOwningPlayerInTotemRange : public UAnyActorPairQueryRangeIsTrue {
    GENERATED_BODY()
public:
    UOwningPlayerInTotemRange();
protected:
    UFUNCTION()
    void OnLevelReadyToPlay();
    
};


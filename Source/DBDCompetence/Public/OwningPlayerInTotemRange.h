#pragma once
#include "CoreMinimal.h"
#include "AnyActorPairQueryRangeIsTrue.h"
#include "OwningPlayerInTotemRange.generated.h"

UCLASS()
class UOwningPlayerInTotemRange : public UAnyActorPairQueryRangeIsTrue {
    GENERATED_BODY()
public:
protected:
    UFUNCTION()
    void OnLevelReadyToPlay();
    
public:
    UOwningPlayerInTotemRange();
};


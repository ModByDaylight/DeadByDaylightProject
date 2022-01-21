#pragma once
#include "CoreMinimal.h"
#include "AnyActorPairQueryRangeIsTrue.h"
#include "IsOwningPlayerInRangeFromHook.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UIsOwningPlayerInRangeFromHook : public UAnyActorPairQueryRangeIsTrue {
    GENERATED_BODY()
public:
    UIsOwningPlayerInRangeFromHook();
protected:
    UFUNCTION()
    void OnLevelReadyToPlay();
    
};


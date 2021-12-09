#pragma once
#include "CoreMinimal.h"
#include "AnyActorPairQueryRangeIsTrue.h"
#include "IsOwningPlayerInRangeFromHook.generated.h"

UCLASS()
class UIsOwningPlayerInRangeFromHook : public UAnyActorPairQueryRangeIsTrue {
    GENERATED_BODY()
public:
protected:
    UFUNCTION()
    void OnLevelReadyToPlay();
    
public:
    UIsOwningPlayerInRangeFromHook();
};


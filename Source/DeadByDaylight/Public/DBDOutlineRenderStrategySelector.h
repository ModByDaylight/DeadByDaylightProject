#pragma once
#include "CoreMinimal.h"
#include "DBDOutlineRenderStrategySelector.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FDBDOutlineRenderStrategySelector {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    AActor* _actorForStrategy;
    
public:
    DEADBYDAYLIGHT_API FDBDOutlineRenderStrategySelector();
};


#pragma once
#include "CoreMinimal.h"
#include "EAIGameState.h"
#include "EAIFleeLoopStrategy.h"
#include "GameStateEvadeLoopStrategyMapContainer.generated.h"

USTRUCT(BlueprintType)
struct FGameStateEvadeLoopStrategyMapContainer {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TMap<EAIGameState, EAIFleeLoopStrategy> Map;
    
    DBDBOTS_API FGameStateEvadeLoopStrategyMapContainer();
};


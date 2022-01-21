#pragma once
#include "CoreMinimal.h"
#include "EAIDangerState.h"
#include "EAIGameState.h"
#include "DangerStateGameStateMapContainer.generated.h"

USTRUCT(BlueprintType)
struct FDangerStateGameStateMapContainer {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TMap<EAIDangerState, EAIGameState> Map;
    
    DBDBOTS_API FDangerStateGameStateMapContainer();
};


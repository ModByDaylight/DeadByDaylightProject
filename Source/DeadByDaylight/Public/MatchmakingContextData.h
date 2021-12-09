#pragma once
#include "CoreMinimal.h"
#include "MatchmakingContextData.generated.h"

USTRUCT()
struct FMatchmakingContextData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    uint32 ContextId;
    
    DEADBYDAYLIGHT_API FMatchmakingContextData();
};


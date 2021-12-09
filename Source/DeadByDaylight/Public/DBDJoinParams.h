#pragma once
#include "CoreMinimal.h"
#include "EGameType.h"
#include "DBDJoinParams.generated.h"

USTRUCT()
struct FDBDJoinParams {
    GENERATED_BODY()
public:
    UPROPERTY()
    EGameType GameType;
    
    DEADBYDAYLIGHT_API FDBDJoinParams();
};


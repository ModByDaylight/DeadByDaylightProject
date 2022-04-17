#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EDBDScoreTypes.h"
#include "DBDRecentGameplayEvents.generated.h"

USTRUCT(BlueprintType)
struct FDBDRecentGameplayEvents {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<EDBDScoreTypes, FDateTime> _recentGameplayEvents;
    
public:
    DEADBYDAYLIGHT_API FDBDRecentGameplayEvents();
};


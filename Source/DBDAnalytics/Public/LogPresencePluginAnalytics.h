#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "LogPresencePluginAnalytics.generated.h"

USTRUCT()
struct FLogPresencePluginAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Context;
    
    UPROPERTY()
    FString Message;
    
    DBDANALYTICS_API FLogPresencePluginAnalytics();
};


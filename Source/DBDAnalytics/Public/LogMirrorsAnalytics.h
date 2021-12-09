#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "LogMirrorsAnalytics.generated.h"

USTRUCT()
struct FLogMirrorsAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString LogMirrors;
    
    DBDANALYTICS_API FLogMirrorsAnalytics();
};


#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "EACAnalytics.generated.h"

USTRUCT()
struct FEACAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString LogMessage;
    
    DBDANALYTICS_API FEACAnalytics();
};


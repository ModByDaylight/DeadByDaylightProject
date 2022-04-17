#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "ExecExecutedAnalytics.generated.h"

USTRUCT()
struct FExecExecutedAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Location;
    
    UPROPERTY()
    FString NetMode;
    
    UPROPERTY()
    FString Requester;
    
    UPROPERTY()
    FString Command;
    
    UPROPERTY()
    bool Executed;
    
    DBDANALYTICS_API FExecExecutedAnalytics();
};


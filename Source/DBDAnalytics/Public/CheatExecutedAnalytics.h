#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "CheatExecutedAnalytics.generated.h"

USTRUCT()
struct FCheatExecutedAnalytics : public FUniquelyIdentifiedAnalytic {
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
    bool Successful;
    
    DBDANALYTICS_API FCheatExecutedAnalytics();
};


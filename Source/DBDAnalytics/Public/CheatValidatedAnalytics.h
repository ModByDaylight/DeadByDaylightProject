#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "CheatValidatedAnalytics.generated.h"

USTRUCT()
struct FCheatValidatedAnalytics : public FUniquelyIdentifiedAnalytic {
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
    bool Validated;
    
    DBDANALYTICS_API FCheatValidatedAnalytics();
};


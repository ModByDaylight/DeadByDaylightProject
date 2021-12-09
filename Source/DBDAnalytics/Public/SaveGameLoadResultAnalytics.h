#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "SaveGameLoadResultAnalytics.generated.h"

USTRUCT()
struct FSaveGameLoadResultAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool LoadSuccessful;
    
    UPROPERTY()
    FString Message;
    
    DBDANALYTICS_API FSaveGameLoadResultAnalytics();
};


#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "StadiaLivestreamAnalytics.generated.h"

USTRUCT()
struct FStadiaLivestreamAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString StreamStartTime;
    
    UPROPERTY()
    FString UserId;
    
    UPROPERTY()
    bool CrowdPlayEnabled;
    
    UPROPERTY()
    bool CrowdChoiceEnabled;
    
    DBDANALYTICS_API FStadiaLivestreamAnalytics();
};


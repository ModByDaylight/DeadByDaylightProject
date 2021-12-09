#pragma once
#include "CoreMinimal.h"
#include "BaseSingleStructIndexAnalytics.h"
#include "UniquelyIdentifiedAnalytic.generated.h"

USTRUCT()
struct DBDANALYTICS_API FUniquelyIdentifiedAnalytic : public FBaseSingleStructIndexAnalytics {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Version;
    
    UPROPERTY()
    FString Branch;
    
    UPROPERTY()
    FString Changelist;
    
    UPROPERTY()
    FString Configuration;
    
    UPROPERTY()
    FString MirrorsId;
    
    UPROPERTY()
    FString ClientId;
    
    UPROPERTY()
    FString Platform;
    
    UPROPERTY()
    FString BackendEnv;
    
    FUniquelyIdentifiedAnalytic();
};


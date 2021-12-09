#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "SyncLoadAnalytics.generated.h"

USTRUCT()
struct FSyncLoadAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString AssetName;
    
    UPROPERTY()
    float LoadTimeMilliseconds;
    
    UPROPERTY()
    FString DeviceProfileName;
    
    UPROPERTY()
    FString BuildConfiguration;
    
    UPROPERTY()
    int32 ChangelistNumber;
    
    UPROPERTY()
    FString MapName;
    
    DBDANALYTICS_API FSyncLoadAnalytics();
};


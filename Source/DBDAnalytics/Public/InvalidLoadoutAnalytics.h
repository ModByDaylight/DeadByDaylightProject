#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "InvalidLoadoutAnalytics.generated.h"

USTRUCT()
struct FInvalidLoadoutAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 SlasherPerkCount;
    
    UPROPERTY()
    int32 PowerAddonCount;
    
    UPROPERTY()
    int32 CamperPerkCount;
    
    UPROPERTY()
    int32 ItemAddonCount;
    
    UPROPERTY()
    FString CallingFunctionName;
    
    UPROPERTY()
    int32 CharacterId;
    
    DBDANALYTICS_API FInvalidLoadoutAnalytics();
};


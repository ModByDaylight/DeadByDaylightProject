#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "PerkAcquisitionAnalytics.generated.h"

USTRUCT()
struct FPerkAcquisitionAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString CharacterName;
    
    UPROPERTY()
    FString PerkId;
    
    UPROPERTY()
    FString PerkSource;
    
    UPROPERTY()
    FString Duplicate;
    
    UPROPERTY()
    int32 PerkLevel;
    
    DBDANALYTICS_API FPerkAcquisitionAnalytics();
};


#pragma once
#include "CoreMinimal.h"
#include "SavedStatsData.generated.h"

USTRUCT(BlueprintType)
struct FSavedStatsData {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 Version;
    
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    float Value;
    
    DEADBYDAYLIGHT_API FSavedStatsData();
};


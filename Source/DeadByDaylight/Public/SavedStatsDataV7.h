#pragma once
#include "CoreMinimal.h"
#include "SavedStatsDataV7.generated.h"

USTRUCT(BlueprintType)
struct FSavedStatsDataV7 {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FName Name;
    
    UPROPERTY(SaveGame)
    float Value;
    
    DEADBYDAYLIGHT_API FSavedStatsDataV7();
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LegacySavedDailyRitualInstance.h"
#include "LegacySavedDailyRitualContainer.generated.h"

USTRUCT(BlueprintType)
struct FLegacySavedDailyRitualContainer {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FDateTime LastRitualReceivedDate;
    
    UPROPERTY(SaveGame)
    TArray<FLegacySavedDailyRitualInstance> Rituals;
    
    DEADBYDAYLIGHT_API FLegacySavedDailyRitualContainer();
};


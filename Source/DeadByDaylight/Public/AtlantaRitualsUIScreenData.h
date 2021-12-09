#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AtlantaRitualUIData.h"
#include "AtlantaRitualsUIScreenData.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaRitualsUIScreenData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FDateTime DailyRefreshTime;
    
    UPROPERTY(BlueprintReadOnly)
    FDateTime WeeklyRefreshTime;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FAtlantaRitualUIData> DailyRituals;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FAtlantaRitualUIData> WeeklyRituals;
    
    DEADBYDAYLIGHT_API FAtlantaRitualsUIScreenData();
};


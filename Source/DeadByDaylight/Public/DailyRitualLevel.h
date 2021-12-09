#pragma once
#include "CoreMinimal.h"
#include "DailyRitualLevel.generated.h"

USTRUCT(BlueprintType)
struct FDailyRitualLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Threshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Tolerance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 DisplayTotal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BloodpointsReward;
    
    DEADBYDAYLIGHT_API FDailyRitualLevel();
};


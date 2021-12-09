#pragma once
#include "CoreMinimal.h"
#include "SurvivorSleepiness.generated.h"

USTRUCT(BlueprintType)
struct DEADBYDAYLIGHT_API FSurvivorSleepiness {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    float _sleepiness;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    float _sleepThreshold;
    
public:
    FSurvivorSleepiness();
};


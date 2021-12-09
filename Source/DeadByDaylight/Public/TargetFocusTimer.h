#pragma once
#include "CoreMinimal.h"
#include "DBDTimer.h"
#include "TargetFocusTimer.generated.h"

class ACamperPlayer;

USTRUCT(BlueprintType)
struct DEADBYDAYLIGHT_API FTargetFocusTimer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    ACamperPlayer* _camper;
    
    UPROPERTY()
    FDBDTimer _cooldownTimer;
    
    UPROPERTY()
    float _totalTime;
    
public:
    FTargetFocusTimer();
};


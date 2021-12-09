#pragma once
#include "CoreMinimal.h"
#include "Float_NetQuantize8.h"
#include "DBDTimer.generated.h"

USTRUCT(BlueprintType)
struct DEADBYDAYLIGHT_API FDBDTimer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    float _startTime;
    
    UPROPERTY()
    bool _startTimeDirty;
    
    UPROPERTY()
    FFloat_NetQuantize8 _timeLeft;
    
    UPROPERTY()
    bool _replicateTimeLeft;
    
    UPROPERTY()
    float _interpSpeed;
    
public:
    FDBDTimer();
};

